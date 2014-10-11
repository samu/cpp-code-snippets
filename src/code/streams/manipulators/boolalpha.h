#include <iostream>

void boolalpha_demo() {
  std::cout << true << std::endl;
  std::cout << std::boolalpha << true << std::endl;
  std::cout << true << std::endl;
  std::cout << 1 << std::endl;
  std::cout << 0 << std::endl;
  std::cout << std::noboolalpha << true << std::endl;

  // Output:
  // 1
  // true
  // true
  // 1
  // 0
  // 1
}