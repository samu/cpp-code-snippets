#include "util.h"

#include <algorithm>
#include <vector>

void copy_directly() {
  std::vector<int> src{1, 2, 3, 4};

  // note that the size of dest must be at least the size of src to avoid
  // undefined behaviour:
  std::vector<int> dest(4);

  std::copy(src.begin(), src.end(), dest.begin());

  print("src", src);
  print("dest", dest);

  // output
  // src:  1 2 3 4
  // dest: 1 2 3 4
}

void copy_with_back_inserter() {
  std::vector<int> src{5, 6, 7, 8};
  std::vector<int> dest{};

  // using a back_inserter here makes sure that dest is being resized if required:
  std::copy(src.begin(), src.end(), std::back_inserter(dest));

  print("src", src);
  print("dest", dest);

  // output
  // src:  5 6 7 8
  // dest: 5 6 7 8
}