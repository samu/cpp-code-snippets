#include <iostream>
#include <sstream>

int get_age_2(std::istream& in) {
  int age{-1};

  while (!in.eof()) {
    if (in >> age) {
      return age;
    }

    // read the invalid sequence then continue
    in.clear();
    std::string invalid_sequence{};
    in >> invalid_sequence;
  }

  return -1;
}

void reading_integers_2() {
  std::istringstream in{"24 a 25    "};

  int age;

  age = get_age_2(in);
  std::cout << "age: " << age << std::endl; // age: 24

  age = get_age_2(in);
  std::cout << "age: " << age << std::endl; // age: 25

  age = get_age_2(in);
  std::cout << "age: " << age << std::endl; // age: -1

  std::cout << "in.eof(): " << in.eof() << std::endl; // in.eof(): 1
}