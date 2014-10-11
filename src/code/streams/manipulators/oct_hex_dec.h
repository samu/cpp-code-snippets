#include <iostream> // std::cout, std::dec, std::hex, std::oct

void oct_hex_dec() {
  int n = 29;
  std::cout << std::dec << n << std::endl;
  // the setting persists for subsequent calls
  std::cout << std::hex << n << std::endl;
  std::cout << n << std::endl;
  std::cout << std::oct << n << std::endl;
  std::cout << n << std::endl;

  // output
  // 29
  // 1d
  // 1d
  // 35
  // 35
}