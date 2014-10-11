#include <string>
#include <sstream>

void read_line(std::istream& in) {
  std::cout << "doing absolutely nothing!" << std::endl;
}

template<typename HEAD, typename...ARGS>
void read_line(std::istream& in, HEAD& head, ARGS &...args) {
  in >> head;
  read_line(in, args...);
}

void read_line_demo() {
  int a, b, c;
  std::string input{"1 2 3"};
  std::istringstream in{input};

  read_line(in, a, b, c);

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;

  // output
  // a: 1
  // b: 2
  // c: 3
}

  // if (sizeof...(args)) {
  //   read_line(in, args...);
  // }