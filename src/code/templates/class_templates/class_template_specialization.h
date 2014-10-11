// this example is currently incomplete. remove it?

#include <iostream>
#include <string>

template<typename T>
struct Versatile;

// we can specialize a templated class with the following syntax:
template<>
struct Versatile<std::string> {
  void print() {
    // std::cout << "string: " << data << std::endl;
//                             ^  error: ‘data’ was not declared in this scope %bamprog%
  }
};

template<typename T>
struct Versatile {

  Versatile(T t) : data{t} {}

  void print() {
    std::cout << "number: " << data << std::endl;
  }

protected: T data;

};

void class_template_specialization() {
  Versatile<int> vint{1};
  vint.print();

  Versatile<double> vdou{1.1};
  vdou.print();

  Versatile<std::string> vstr{};
  vstr.print();

  // output
  // number: 1
  // number: 1.1
  // string: str
}