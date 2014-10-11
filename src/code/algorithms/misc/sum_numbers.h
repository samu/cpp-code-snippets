#include <numeric>   // accumulate
#include <sstream>

void sum_integers() {
  std::istringstream in{"1 2 3"};

  using Iterator = std::istream_iterator<int>;
  Iterator begin{in};
  Iterator end{};

  int sum = 0;

  sum = std::accumulate(begin, end, 0);
  std::cout << "sum: " << sum << std::endl; // sum: 6
}

void sum_floats() {
  std::istringstream in{"1.1 2.2 3.3"};

  using Iterator = std::istream_iterator<double>;
  Iterator begin{in};
  Iterator end{};

  double sum = 0;

  sum = std::accumulate(begin, end, .0);
  //                                 ^--- we have to pass in a double, otherwise result
  //                                      will be integer!
  std::cout << "sum: " << sum << std::endl; // sum: 6.6
}