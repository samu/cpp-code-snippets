#ifndef PERSON_H_
#define PERSON_H_
#include <memory>
#include <string>
#include <vector>
#include <iosfwd>

class Person {
  std::shared_ptr<class PersonImpl> person;

  Person(std::shared_ptr<class PersonImpl> person) :
    person { person } {}

public:
  Person(std::string name);
  Person(std::string name, Person father, Person mother);
  ~Person();
  void addChild(Person child);
  std::string getName() const;
  Person findChild(std::string name) const;
  void killChild(Person child);
  void killMe();
  operator bool() const;
  void print(std::ostream &out) const;
};

#endif /* PERSON_H_ */