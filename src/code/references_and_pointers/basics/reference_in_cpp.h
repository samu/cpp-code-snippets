#include <iostream>
#include <string>

void change(std::string& something) {
  something = "another string";
}

void reference_in_cpp() {
  std::string str = "a string";

  std::cout << "str: " << str << std::endl;

  change(str);

  std::cout << "str: " << str << std::endl;

  // output
  // str: a string
  // str: another string
}
