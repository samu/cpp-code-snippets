#include <string>

template<typename T>
void compare(T const& one, T const& two) {
}

void string_fallacy() {
  // the following does not compile. at first it looks like we are passing strings
  // to the function. however, the compiler will recognize the arguments as char
  // arrays:
  //
  // compare("shorter", "longer");
  //                            ^  error: no matching function for call to
  //                               ‘compare(const char [8], const char [7])’

  // this works because both arguments have the same size:
  compare("one", "two");

  // if we want the arguments to be passed as strings, we can do the following:
  compare<std::string>("shorter", "longer");
}