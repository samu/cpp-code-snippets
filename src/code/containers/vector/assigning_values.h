#include <iostream>
#include <vector>

void assigning_values() {
  std::vector<int> ve1{3, 2, 1};

  ve1[1] = 10; // OK

  // the following line tries to access an invalid index and is undefined behaviour
  // ve1[3] = 30;
}

void using_front() {
  std::vector<int> ve1{3, 2, 1};

  // because front() returns a reference, we can also assign values to it
  std::cout << ve1.front() << std::endl;
  ve1.front() = 4;
  std::cout << ve1.front() << std::endl;
  // Output:
  // 3
  // 4

  // there is also a const version of front();
  const int f = ve1.front();

  // the opposite to front() is back()
}