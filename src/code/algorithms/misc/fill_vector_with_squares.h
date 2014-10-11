#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>

void fill_vector_with_squares() {
  // create vector containing only ones
  std::vector<int> v(10, 1);

  // this will make the vector contain the values from 1 to 10
  std::partial_sum(v.begin(), v.end(), v.begin());

  // square every item in v
  std::transform(v.begin(), v.end(), v.begin(), [](int i) { return i * i; });

  // print it
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>{std::cout, " "});

  // output
  // 1 4 9 16 25 36 49 64 81 100
}