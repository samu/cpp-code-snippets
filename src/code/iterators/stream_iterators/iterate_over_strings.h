#include <sstream>
#include <iterator>
#include <iostream>

void iterate_over_strings() {
  using namespace std;

  istringstream in{"ill iterate until youre dizzy"};

  copy(istream_iterator<string>{in}, istream_iterator<string>{},
       ostream_iterator<string>{cout, "-"});

  // output
  // ill-iterate-until-youre-dizzy
}
