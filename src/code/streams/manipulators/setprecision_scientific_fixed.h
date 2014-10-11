#include <iostream> // setprecision, scientific, fixed

double PI = 3.14159;

void setprecision() {

  // setprecision sets the maximum digits to display.
  // the number is automatically rounded.
  std::cout << std::setprecision(5) << PI << std::endl;
  // setprecision will persist for subsequent outputs to the stream
  std::cout << PI << std::endl;

  // output
  // 3.1416
  // 3.1416
}

void scientific() {
  std::cout << std::scientific << 10000000.0 << std::endl;

  std::cout << std::setprecision(0);

  std::cout << std::scientific << 10000000.0 << std::endl;

  // output
  // 1.000000e+07
  // 1e+07
}

void fixed() {
  // expands the output to a minimum of digits.
  std::cout << std::fixed << 1.1 << std::endl;
  // 1.100000

  std::cout << std::fixed << std::setprecision(3) << 1.0 << std::endl;
  std::cout << std::fixed << PI << std::endl;
  // 1.000
  // 3.142
}