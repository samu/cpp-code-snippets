#include <vector>

void initialization() {
  // with initializer list
  std::vector<int> ve1{1, 2, 3};

  // with capacity
  // elements are zero-initialized
  std::vector<int> ve2(3);
}
