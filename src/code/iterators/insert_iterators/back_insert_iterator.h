#include <iterator>
#include <vector>
#include <algorithm>
#include "util.h"

void back_insert_iterator() {
  std::vector<int> incomplete{5, 4};
  print("incomplete", incomplete);

  std::vector<int> addition{3, 2, 1};
  std::copy(addition.begin(), addition.end(), std::back_inserter(incomplete));

  print("complete", incomplete);

  // output
  // incomplete:   {5, 4}
  // complete:     {5, 4, 3, 2, 1}
}
