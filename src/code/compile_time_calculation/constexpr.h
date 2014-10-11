#include <vector>
#include <iostream>

constexpr int add_at_compile_time(int a, int b) {
  return a + b;
}

void constexpr_demo() {
  // to c will be assigned the value 3 at compile time, because the called function
  // add_at_compile_time() is a constexpr.
  // writing 'int c = 1 + 2;' would be equivalent.
  int c = add_at_compile_time(1, 2);
}