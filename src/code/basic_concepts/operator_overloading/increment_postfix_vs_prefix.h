#include <iostream>

struct Inc {
  void operator++() {
    std::cout << "this is the prefix increment" << std::endl;
  }

  // we must use a dummy parameter of type int so the compiler can differ between the
  // pre- and postfix increment operators. the dummy parameter doesnt have any
  // specific value:
  void operator++(int dummy) {
    std::cout << "this is the postfix increment" << std::endl;
  }
};

void increment_postfix_vs_prefix() {
  Inc i{};
  ++i;
  i++;

  // output
  // this is the prefix increment
  // this is the postfix increment
}