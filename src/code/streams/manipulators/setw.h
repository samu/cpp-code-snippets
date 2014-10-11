#include <iostream>
#include <iomanip> // std::setw

void std_cout_width() {
  // setting the width on an output stream determines the minimum count of characters
  // the output shall have:
  std::cout.width(4);
  std::cout << "ab" << std::endl;

  // this setting will be consumed by the first output to the stream. the next
  // output will not have the width set anymore:
  std::cout << "ab" << std::endl;

  //output
  //   ab
  // ab
}

void setw() {
  // we can use setw(n) as a shortcut to width(n):
  std::cout << std::setw(4) << "ab" << std::endl;
  std::cout << "ab" << std::endl;

  //output
  //   ab
  // ab
}
