#include "util.h"

#include <algorithm>
#include <vector>

void partition() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};

  print("before", v);

  // puts all the even numbers into the first half of the vector and all the odd
  // numbers into the second half
  std::partition(v.begin(), v.end(), [](int n) { return !(n % 2); });

  print("after", v);

  // output
  // before: 1 2 3 4 5 6 7 8
  // after:  8 2 6 4 5 3 7 1
}

// makes sure the relative order of the elements is preserved
void stable_partition() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};

  print("before", v);

  std::stable_partition(v.begin(), v.end(), [](int n) { return !(n % 2); });

  print("after", v);

  // output
  // before: 1 2 3 4 5 6 7 8
  // after:  2 4 6 8 1 3 5 7
}

// besides these there are the following algorithms handling partitioning:
//
// is_partitioned(v.begin(), v.end(), unary_predicate)
//
// partition_copy(v.begin(), v.end(), dest1.begin(), dest2.begin(), unary_predicate)
//
// forward_iterator = partition_point(v.begin(), v.end(), unary_predicate)