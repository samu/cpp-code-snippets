#include <boost/operators.hpp>
#include <cmath>
#include <algorithm>
#include "primeiterator.h"
#include <boost/iterator/counting_iterator.hpp>
#include <boost/iterator/filter_iterator.hpp>

struct primeiterator : boost::input_iterator_helper<primeiterator, unsigned> {
  explicit primeiterator(value_type start = 3);

  value_type operator*() const;
  primeiterator& operator++();
  bool operator==(primeiterator const &other) const;

private:
  void next();
  value_type current;
};

bool is_prime(unsigned number) {
  if (number % 2 == 0 || number == 1) {
    return false;
  }

  if (number == 3) {
    return true;
  }

  auto counting = boost::make_counting_iterator(3u);
  auto countingEnd = boost::make_counting_iterator(number - 2);

  auto isOdd = [](unsigned x) { return x % 2 != 0; };
  auto odd = boost::make_filter_iterator(isOdd, counting);
  auto oddEnd = boost::make_filter_iterator(isOdd, countingEnd);

  return std::none_of(odd, oddEnd, [number](unsigned divisor) {
    return number % divisor == 0;
  });
}

primeiterator::primeiterator(unsigned start)
  : current { start } {
  if (!is_prime(current)) {
    next();
  }
}

unsigned primeiterator::operator*() const {
  return current;
}

bool primeiterator::operator==(primeiterator const &other) const {
  return current == other.current;
}

primeiterator& primeiterator::operator++() {
  next();
  return *this;
}

void primeiterator::next() {
  while (!is_prime(++current)) {
  }
}
