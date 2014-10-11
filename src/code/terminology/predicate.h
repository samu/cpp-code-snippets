#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// a predicate is something that delivers a boolean value on a certain input.
// we differ between unary predicates, which take one argument, and binary
// predicates, which take two arguments.
// in C++, we can represent predicates with the following constructs:

// a struct overriding the call-operator
struct odd_s {
  bool operator() (int n) {
    return (n % 2);
  }
};

// a function
bool odd_f(int n) {
  return (n % 2);
}

// a lambda
auto odd_l = [](int n){ return (n % 2); };

void predicate() {
  using namespace std;

  vector<int> src{1, 2, 3, 4, 5, 6};

  copy_if(src.begin(), src.end(), ostream_iterator<int>{cout}, odd_f);
  copy_if(src.begin(), src.end(), ostream_iterator<int>{cout}, odd_l);
  copy_if(src.begin(), src.end(), ostream_iterator<int>{cout}, odd_s{});

  // output
  // 135135135
}