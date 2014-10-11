#include <string>
#include <sstream>

void throwing_anything() {
  try {
    throw 1;
  } catch (int i) {}

  try {
    throw "char";
  } catch (char const * i) {}


  try {
    throw std::string{"string"};
  } catch (std::string str) {}

  // we can not throw a stream because streams are not copyable
  // throw std::istringstream{"stream"};
  //                                  ^  error (...)
}