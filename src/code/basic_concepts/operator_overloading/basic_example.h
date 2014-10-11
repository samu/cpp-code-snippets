#include <iostream>

struct Age {
  Age(int age) : data{age} {}

  bool operator<(Age const & comparable) const {
    //               ^---                ^--- not a requirement, but good practice
    //                                        for operators which dont change the state
    return data < comparable.data;
  }

  int data;
};

// an operator can also be defined outside of the types context.
// note that the member 'data' must be public in order to access it.
bool operator<=(Age& a, Age& b) {
  return a.data < b.data;
}

void basic_example() {
  Age a1{20};
  Age a2{30};

  std::cout << std::boolalpha << "20 < 30: " << (a1 < a2) << std::endl;
  std::cout << std::boolalpha << "20 <= 30: " << (a1 <= a2) << std::endl;
  // using the operator with a function call:
  std::cout << std::boolalpha << "20 < 30: " << (a1.operator<(a2)) << std::endl;
  // output
  // 20 < 30: true
  // 20 <= 30: true
  // 20 < 30: true

  // greater than is unimplemented, using it causes a compiler error:
  // std::cout << std::boolalpha << "20 > 30: " << (a1 > a2) << std::endl;
  //                                                   ^  error: (...)
}