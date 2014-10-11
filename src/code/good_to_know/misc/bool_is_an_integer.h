#include <iostream>

void bool_is_an_integer() {
  std::cout << "5 + true:  " << 5 + true  << std::endl;
  std::cout << "5 + 1:     " << 5 + 1     << std::endl;
  std::cout << "6 + false: " << 6 + false << std::endl;
  std::cout << "6 - 0:     " << 6 - 0     << std::endl;

  // output
  // 5 + true:  6
  // 5 + 1:     6
  // 6 + false: 6
  // 6 - 0:     6
}
