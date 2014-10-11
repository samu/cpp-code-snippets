#include <vector>

void appending_values() {
  std::vector<int> ve1(3);
  ve1.push_back(0);
  ve1.push_back(1);
  ve1.push_back(2);

  // At this point, the vector will automatically resize.
  ve1.push_back(3);
}