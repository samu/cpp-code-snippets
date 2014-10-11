#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <boost/iterator/counting_iterator.hpp>
#include <boost/iterator/filter_iterator.hpp>

bool is_divisable(int x, int divisor) {
  return !(x % divisor);
}

bool is_prime(unsigned x) {
  if (x % 2 == 0 || x < 3) return false;
  return std::none_of(boost::make_counting_iterator(2u),
                      boost::make_counting_iterator(x),
                      [x](unsigned divisor) { return is_divisable(x, divisor); });
}

void prime_iterator() {
  auto counting = boost::make_counting_iterator(1);
  auto countingEnd = boost::make_counting_iterator(40);

  auto prime_iterator = boost::make_filter_iterator(is_prime, counting);
  auto prime_iterator_end = boost::make_filter_iterator(is_prime, countingEnd);

  std::copy(prime_iterator, prime_iterator_end,
            std::ostream_iterator<int>{std::cout, " "});

  // output
  // 3 5 7 11 13 17 19 23 29 31 37
}