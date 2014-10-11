#include "line_iterator.h"

void line_iterator_demo() {
  std::istringstream in{"first line\nsecond line"};
  LineIterator li{in};

  std::cout << "*li: " << *li << std::endl;
  li++;
  std::cout << "*li: " << *li << std::endl;

  // output
  // *li: first line
  // *li: second line
}

int main() {
  line_iterator_demo();
}