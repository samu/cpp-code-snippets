#include <iterator>
#include <vector>
#include <algorithm>
#include "util.h"

void insert_iterator() {
  std::vector<int> incomplete{1, 4, 5};
  print("incomplete", incomplete);

  std::vector<int>::iterator it = incomplete.begin();
  it++; // we have to insert after the first entry, so lets increment by one
  std::insert_iterator<std::vector<int>> insert_iterator{incomplete, it};

  std::vector<int> addition{2, 3}; // this is the content we want to insert
  std::copy(addition.begin(), addition.end(), insert_iterator);

  print("complete", incomplete);

  // output
  // incomplete:   {1, 4, 5}
  // complete:     {1, 2, 3, 4, 5}
}
