#include "dynArray.h"

#include <iostream>

int main() {
  dynArray<int> a{};

  a.push_back(10);

  std::cout << "a[0]: " << a[0] << std::endl;

  // dynArray<int>::iterator it;
  // dynArray<int>::const_iterator cit;

}