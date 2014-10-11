#include <vector>

void accessing_elements() {
  std::vector<int> ve1(3);

  // we can use at() or the []-operator to access elements in a vector
  ve1.at(1);
  ve1[1];

  // the difference lies in the behaviour of when trying to access an element with
  // an index that is out of range:

  // the following code would throw 'std::out_of_range'
  // ve1.at(3);

  // the following code is undefined behaviour and does not throw an exception
  // ve1[3];
}
