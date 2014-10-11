#include <sstream>
#include <iterator>
#include <iostream>

void iterate_over_ints() {
  using namespace std;

  istringstream in{"1 2 3"};

  copy(istream_iterator<int>{in}, istream_iterator<int>{},
       ostream_iterator<int>{cout, ""});

  // output
  // 123
}
