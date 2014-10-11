#include <iostream>
#include <iterator>
#include <algorithm>
#include <sstream>
#include <boost/operators.hpp>

namespace {
  std::istringstream empty{};
}

struct LineIterator : boost::input_iterator_helper<LineIterator, std::string> {

  LineIterator() : in(empty) {
    in.clear(std::ios_base::eofbit);
  }

  explicit LineIterator(std::istream &in) : in(in) {
    read_next_line();
  }

  bool operator==(LineIterator const &r) const {
    return !in.good() && !r.in.good();
  }

  value_type operator*() const {
    return current_line;
  }

  LineIterator &operator ++() {
    read_next_line();
    return *this;
  }

private:

  void read_next_line() {
    getline(in, current_line);
  }
  std::istream &in;
  std::string current_line;
};
