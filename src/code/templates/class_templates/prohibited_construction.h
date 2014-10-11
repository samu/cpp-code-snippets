#include <string>

// we can prohobit the creation of templated types with partial specializations by
// deleting the destructors in the specialized type. The compiler prohibits the
// creation of objects of types which dont have a destructor.
// the following two specialiations will prohibit creating instances of
// Restrictive<char> and Restrictive<T*>.

template<typename T>
struct Restrictive {
};

// prohibit Restrictive<char>
template<>
struct Restrictive<char> {
  ~Restrictive() = delete;
};

// prohibit Restrictive<T*>
template<typename T>
struct Restrictive<T*> {
  ~Restrictive() = delete;
};

void prohibited_construction() {
  Restrictive<int> ints{};
  Restrictive<std::string> strings{};

  // Restrictive<char> chars{};
  //                         ^  error: use of deleted function

  // Restrictive<int*> pints{};
  //                         ^  error: use of deleted function

  // Restrictive<char*> pchars{};
  //                           ^  error: use of deleted function
}