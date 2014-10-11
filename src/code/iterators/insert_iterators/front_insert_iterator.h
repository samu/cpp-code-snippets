#include <iterator>
#include <list>
#include <algorithm>
#include "util.h"

void front_insert_iterator() {
  std::list<int> incomplete{4, 5};
  print("incomplete", incomplete);

  std::vector<int> addition{3, 2, 1};
  std::copy(addition.begin(), addition.end(), std::front_inserter(incomplete));

  print("complete", incomplete);

  // output
  // incomplete:   {4, 5}
  // complete:     {1, 2, 3, 4, 5}
}