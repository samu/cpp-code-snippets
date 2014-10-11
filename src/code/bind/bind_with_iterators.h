#include <iostream>
#include <algorithm>
#include <functional> // std::bind, std::placeholders
#include <vector>

double bla() {
  return 1;
}

void bind_with_iterators() {
  std::vector<int> v{1, 2, 3};

  std::vector<int>::iterator it = v.begin();

  auto e = std::bind(std::multiplies<double>(), _1, 3);

  std::cout << "e(2, *it): " << e(*it) << std::endl;
  it++;
  std::cout << "e(2, *it): " << e(*it) << std::endl;




}