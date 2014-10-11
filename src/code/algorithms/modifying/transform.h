#include "util.h"

#include <algorithm>
#include <vector>

void unary_transform() {
  std::vector<int> numbers{1, 2, 3, 4};

  std::transform(numbers.begin(), numbers.end(),
                 numbers.begin(),
                 [](int n) { return n + 10; });

  print("numbers", numbers);

  // output
  // 11 12 13 14
}

void binary_transform() {
  std::vector<int> numbers1{1, 2, 3, 4};
  std::vector<int> numbers2{4, 3, 2, 1};

  std::transform(numbers1.begin(), numbers1.end(),
                 numbers2.begin(), numbers2.begin(),
                 [](int n1, int n2) { return n1 + n2; });

  print("numbers2", numbers2);

  // output
  // 5 5 5 5
}