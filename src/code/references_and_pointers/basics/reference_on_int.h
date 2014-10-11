#include <iostream>

void reference_on_int() {
  int j = 5;
  int& r = j;

  std::cout << "j: " << j << std::endl;
  std::cout << "r: " << r << std::endl;

  j = 6;

  std::cout << "j: " << j << std::endl;
  std::cout << "r: " << r << std::endl;

  r = 7;

  std::cout << "j: " << j << std::endl;
  std::cout << "r: " << r << std::endl;

  // output
  // j: 5
  // r: 5
  // j: 6
  // r: 6
  // j: 7
  // r: 7

}