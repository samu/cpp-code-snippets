#include <iostream>
#include <sstream>

int get_age(std::istream& in) {
  int age{-1};

  while (!in.eof()) {
    if (in >> age) {
      return age;
    }

    std::cout << "in.good(): " << in.good() << std::endl; // in.good(): 0
    std::cout << "in.fail(): " << in.fail() << std::endl; // in.fail(): 1

    // at this point we have to read the remaining content of in so eof file is
    // reached and the while loop is escaped:
    in.clear();
    std::string line{};
    std::getline(in, line);
  }

  return -1;
}

void reading_integers() {
  std::istringstream in{"24 a 25"};

  int age;

  age = get_age(in);
  std::cout << "age: " << age << std::endl; // age: 24

  age = get_age(in);
  std::cout << "age: " << age << std::endl; // age: -1

  std::cout << "in.eof(): " << in.eof() << std::endl; // in.eof(): 1
}