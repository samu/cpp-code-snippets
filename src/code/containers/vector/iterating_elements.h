#include <vector>

void iteration_with_read_only_access() {
  std::vector<int> v{1, 2, 3};
  for (auto const i : v) {
    std::cout << i << " ";

    // i++;
    // ^  error: increment of read-only variable ‘i’
  }
  std::cout << '\n';

  // Output:
  // 1 2 3
}

void iteration_with_reference() {
  std::vector<int> v{1, 2, 3};
  for (auto &i : v) {
    i++;
    std::cout << i << " ";
  }
  std::cout << '\n';

  // Output
  // 2 3 4
}