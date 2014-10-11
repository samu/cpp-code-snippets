#include <iostream>

void assigning_floating_point_to_int() {
  // if we assign a floating point to a variable of type integer, it will
  // automatically be casted.
  int autoconverted_to_int = 7.5;

  std::cout << autoconverted_to_int << std::endl;

  // output:
  // 7
}