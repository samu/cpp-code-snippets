#include <iostream>

void left_right_internal() {
  int n = -1;

  // using std::left or std::right will align the output to the left or right if a
  // width has been specified:
  std::cout.width(6);
  std::cout << std::left << n << std::endl;

  std::cout.width(6);
  std::cout << std::right << n << std::endl;

  // std::internal can be used for negative numbers.
  // for non-numerical values it is equivalent to right:
  std::cout.width(6);
  std::cout << std::internal << n << std::endl;

  // output
  // -1
  //     -1
  // -    1
}