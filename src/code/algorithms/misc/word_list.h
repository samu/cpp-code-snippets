#include <algorithm>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>

struct Comparator {
  bool operator() (const std::string& a, const std::string& b) const {
    return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(),
                        [](char x, char y) {return tolower(x) < tolower(y);});
  }
};

void word_list() {
  using Iterator = std::istream_iterator<std::string>;

  std::istringstream in{"this is a test this is A TEST THIS IS"};

  std::set<std::string, Comparator> list(Iterator{in}, Iterator{});

  std::copy(list.begin(), list.end(), std::ostream_iterator<std::string>{std::cout, "\n"});

  // output (note how set automatically sorts its content)
  // a
  // is
  // test
  // this
}