#include "util.h"

#include <algorithm>
#include <vector>
#include <string>

void move_integers() {
  std::vector<int> numbers{1, 2, 3, 4};
  std::vector<int> copied_numbers;

  std::move(numbers.begin(), numbers.end(), std::back_inserter(copied_numbers));

  print("numbers", numbers);
  print("copied_numbers", copied_numbers);

  // moving the elements depends on the move semantics of the given type.
  // in this case, we are moving ints. the move semantics of ints keeps the original
  // values in the vector:
  //
  // numbers:          1 2 3 4
  // copied_numbers:   1 2 3 4
}

void move_strings() {
  std::vector<std::string> strings{"a", "b", "c"};
  std::vector<std::string> copied_strings;

  std::move(strings.begin(), strings.end(), std::back_inserter(copied_strings));

  print("strings", strings);
  print("copied_strings", copied_strings);

  // move semantics of string actually moves the elements from one vector to the
  // other:
  //
  // strings:          "" "" ""
  // copied_strings:   "a" "b" "c"
}