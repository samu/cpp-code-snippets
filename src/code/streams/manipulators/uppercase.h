#include <iostream>

void uppercase_demo() {
  // makes hexadecimal representations uppercase.
  // attention: non numeric types will NOT be uppercase!
  // the following example shows no effect:
  std::cout << std::uppercase << "abc" << std::endl << std::nouppercase;
  // Output:
  // abc

  // Output integers as hex values:
  std::cout << std::showbase << std::hex;
  std::cout << std::uppercase << 77 << std::endl;
  std::cout << std::nouppercase << 77 << std::endl;

  // Output:
  // 0X4D
  // 0x4d
}
