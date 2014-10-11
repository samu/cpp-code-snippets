#include "mine.h"

void lvalue_examples() {
  int i = 5;
  int* p = &i;
  i = 4;

  class dog {};
  dog d;

  int j = 5;
  int& r = j;
  // int& r = 5; // Error
  const int& x = 5; // OK

}

int square(int& n) {
  return n * n;
}

int square_for_rvalues(const int& n) {
  return n * n;
}

int global = 50;
int& getGlobal() {
  return global;
}

void rvalue_examples() {
  int i = 5; // 5 is an rvalue
  int j = 1 + 2; // 1 + 2 is an rvalue

  int square1 = square(i);
  // int square2 = square(50); // Error: an rvalue cant be passed as a reference
  int square3 = square_for_rvalues(50); // OK, because function takes a const reference

  m::announce("global", global);
  getGlobal() = 60;
  m::announce("global", global);
}

int main() {
  lvalue_examples();
  rvalue_examples();
}