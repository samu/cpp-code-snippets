#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
T median(T a, T b, T c) {
  std::vector<T> list{a, b, c};
  std::sort(list.begin(), list.end());
  return list.at(1);
}

void median_demo() {
  std::cout << "median(2, 3, 1): " << median(2, 3, 1) << std::endl;

  // output
  // median(2, 3, 1): 2
}