#include <iostream>
#include <sstream>

void skipws_demo() {
  // Only has effect on istream
  char a, b, c;

  std::istringstream in{"  123"};
  in >> std::skipws >> a >> b >> c;
  std::cout << a << b << c << std::endl;
  // output: 123

  in.seekg(0); // reset stream to read from beginning
  in >> std::noskipws >> a >> b >> c;
  std::cout << a << b << c << std::endl;
  // output:   1

  std::cout << std::skipws << "   abc   def" << std::endl; // no effect
}
