#include <functional> // std::bind, std::placeholders
#include <cmath>      // sqrt
#include <iostream>

using namespace std::placeholders;

// x + y
void example_1() {
  auto e = std::bind(std::plus<double>(), _1, _2);

  std::cout << "1 + 2 = " << e(1, 2) << std::endl;

  // output
  // 1 + 2 = 3
}

// (2 * x) - (y / 3)
void example_2() {
  auto e = std::bind(std::minus<double>(),
                     std::bind(std::multiplies<double>(), 2, _1),
                     std::bind(std::divides<double>(), _2, 3));

  std::cout << "(2 * 2) - (6 / 3) = " << e(2, 6) << std::endl;

  // output
  // (2 * 2) - (6 / 3) = 2
}

// (x * x) % y
void example_3() {
  auto e = std::bind(std::modulus<int>(),
                     std::bind(std::multiplies<double>(), _1, _1), _2);

  std::cout << "(4 * 4) % 5 = " << e(4, 5) << std::endl;

  // output
  // (4 * 4) % 5 = 1
}

// sqrt(x * x)
void example_4() {
  auto e = std::bind(sqrt, std::bind(std::multiplies<double>(), _1, _1));

  std::cout << "sqrt(4 * 4) = " << e(4) << std::endl;

  // output
  // sqrt(4 * 4) = 4
}
