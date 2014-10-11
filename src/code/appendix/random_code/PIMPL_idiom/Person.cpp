#include "Person.h"
#include <iostream>
#include <algorithm>
#include <functional>

using PersonPtr=std::shared_ptr<class PersonImpl>;
using WeakPersonPtr=std::weak_ptr<class PersonImpl>;

class PersonImpl : public std::enable_shared_from_this<PersonImpl> {
  std::string name;
  WeakPersonPtr father; // don't lock parent objects
  WeakPersonPtr mother;
  std::vector<PersonPtr> children;

  PersonPtr myLock() {
    try {
      auto me=shared_from_this(); // throws when called from dtor!
      return me;
    } catch(std::bad_weak_ptr const &ex){}
    std::cout << "++++already dead? " << name<< '\n';
    return PersonPtr{}; // already dead
  }

public:
  PersonImpl(std::string name,PersonPtr father,PersonPtr mother)
  :name{name},father{father},mother{mother}{
    // can not do shared_from_this here!
    //no if(father) father->addChild(shared_from_this());
  }

  ~PersonImpl() {
    std::cout << "killing me: "<< name << '\n';
    //killMe(); // can not call shared_from_this() in dtor!
  }

  void addChild(PersonPtr child){
    children.push_back(child);
  }

  std::string getName() const {
    return name;
  }

  PersonPtr findChild(std::string name) const {
    using namespace std::placeholders;
    auto finder=[name](PersonPtr const &person){
      return person->getName() == name;
    };
    auto it=find_if(children.begin(),children.end(),finder);
    if (it != children.end()) return *it;
    return nullptr;
  }

  void killChild(PersonPtr child) {
    if (child){
      children.erase(find(children.begin(),children.end(),child));
      //if (child->father == ) ?
    }
  }

  void killMe() {
    // here shared_from_this is possible
    auto me=myLock();
    if (!me) return; // already dead
    auto realfather=father.lock();
    if (realfather) realfather->killChild(me);
    auto realmother=mother.lock();
    if (realmother) realmother->killChild(me);
    children.clear();
  }

  void print(std::ostream &out) const {
    out << "Person: "<< name ;
    auto realfather=father.lock();
    out << "   "<< (realfather?realfather->getName():"orphan");
    auto realmother=mother.lock();
    out << "   "<< (realmother?realmother->getName():"orphan");
    out << "\n    ";
    for(auto const &child:children){
      out << child->name << ", ";
    }
    out << '\n';
  }

  static PersonPtr makePerson(std::string name,
                PersonPtr father={},
                PersonPtr mother={}){
    auto res =  std::make_shared<PersonImpl>(name,father,mother);
    if (father) father->addChild(res);
    if (mother) mother->addChild(res);
    return res;
  }
};

Person::Person(std::string name) :
  person { PersonImpl::makePerson(name) } {
}

Person::Person(std::string name, Person father, Person mother) :
  person { PersonImpl::makePerson(name, father.person, mother.person) } {
}

Person::~Person() {}

void Person::addChild(Person child) { person->addChild(child.person); }
std::string Person::getName() const { return person->getName(); }
Person Person::findChild(std::string name) const {
  auto result = person->findChild(name);
  return Person { result };
}

void Person::killChild(Person child) {
  person->killChild(child.person);
}
void Person::killMe() {
  person->killMe();
}

void Person::print(std::ostream &out) const {
  person->print(out);
}

Person::operator bool() const {
  return person.get();
}
