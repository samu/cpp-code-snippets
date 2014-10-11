#include <iostream>
#include <sstream>

void read_line_2(std::istream& in, std::string& str) {
  getline(in, str);
}

template<typename HEAD, typename...ARGS>
void read_line_2(std::istream& in, HEAD& head, ARGS &...args) {
  in >> head;
  read_line_2(in, args...);
}

void read_line_2_demo() {
  std::istringstream in{"1 some rest 123 \n 2 the rest\n"};
  std::string rest{};
  int first{};

  read_line_2(in,first,rest);

  std::cout << first << std::endl;
  std::cout << rest << std::endl;

  read_line_2(in,first,rest);

  std::cout << first << std::endl;
  std::cout << rest << std::endl;

  // output
  // 1
  //  some rest 123
  // 2
  //  the rest
}
