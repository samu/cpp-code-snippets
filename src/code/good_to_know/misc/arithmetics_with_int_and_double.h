void arithmetics_with_int_and_double() {
  // doing divisions only with integers will return an integer
  std::cout << "7   / 2:    \t\t" << 7 / 2   << std::endl;
  // as soon as a floating point is involved, the result is a floating point too
  std::cout << "7   / 2.0:  \t\t" << 7 / 2.0 << std::endl;
  std::cout << "7.0 / 2:    \t\t" << 7.0 / 2 << std::endl;

  // output
  // 7   / 2:        3
  // 7   / 2.0:      3.5
  // 7.0 / 2:        3.5

  // assigning the division of two integers to a double variable results in an int
  double x = 7 / 2;
  std::cout << "x: " << x << std::endl;
  // output
  // x: 3
}

void division_by_zero_demo() {
  // division by zero is undefined behaviour. the following code compiles and does
  // not cause an exception at runtime:
  // std::cout << "1 / 0: \t\t" << 1 / 0 << std::endl;
}