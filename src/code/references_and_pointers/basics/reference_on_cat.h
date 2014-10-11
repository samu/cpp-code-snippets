#include <iostream>
#include <string>

class Cat {
  std::string name;

public:
  Cat(std::string name) : name{name} {}

  void setName(std::string n) {
    name = n;
  }

  std::string getName() {
    return name;
  }
};

void reference_on_cat() {
  Cat cat{"Hector-Pascal"};
  Cat& same_cat = cat;
  Cat other_cat = cat;

  std::cout << "cat.getName(): " << cat.getName() << std::endl;
  std::cout << "same_cat.getName(): " << same_cat.getName() << std::endl;
  std::cout << "other_cat.getName(): " << other_cat.getName() << std::endl;

  same_cat.setName("Luftdruck");

  std::cout << "cat.getName(): " << cat.getName() << std::endl;
  std::cout << "same_cat.getName(): " << same_cat.getName() << std::endl;
  std::cout << "other_cat.getName(): " << other_cat.getName() << std::endl;

  // output
  // cat.getName():       Hector-Pascal
  // same_cat.getName():  Hector-Pascal
  // other_cat.getName(): Hector-Pascal
  // cat.getName():       Luftdruck
  // same_cat.getName():  Luftdruck
  // other_cat.getName(): Hector-Pascal
}
