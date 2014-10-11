#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> params{};
  std::copy(argv + 1, argv + argc, std::back_inserter(params));

  std::copy(params.begin(), params.end(),
            std::ostream_iterator<std::string>{cout, "\n"});
}
