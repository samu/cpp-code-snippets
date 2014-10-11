#include <vector>
#include <string>
#include <iostream>

#include <boost/operators.hpp>

// we can inherit from boosts less_than_comparable and implement the less-than
// operator to have all other operators ready for our type:
struct Number : private boost::less_than_comparable<Number> {
  Number(int n) : data{n} {}

  bool operator<(Number const& comparable) const {
    data < comparable.data;
  }

  private: int data;
};

void boost_less_than_comparable() {
  Number n1{0};
  Number n2{1};

  // we can now call all the comparation operators:
  n1 < n2;
  n1 > n2;

  // heres an outline of how boost can simulate each operators behaviour with the
  // less-than operator:
  //
  // operator   simulation with <
  // -------------------------------
  // a > b       (b < a)
  // a >= b     !(a < b)
  // a <= b     !(b < a)
  // a == b     !(a < b) && !(b < a)
  // a != b     !(a == b)
}