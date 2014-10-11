#include <iostream>
#include <memory>

struct A {
  A(int n) : n{n} {}
  int n;
};

void shared_ptr_demo() {
  // shared pointers can be copied:

  auto i = std::make_shared<A>(123);

  auto j = i;

  std::cout << "i->n: " << i->n << std::endl;
  std::cout << "(*j).n: " << (*j).n << std::endl;

  // output
  // i->n: 123
  // (*j).n: 123
}