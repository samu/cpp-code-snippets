#include "square_iterator.h"

#include <iostream>
#include <algorithm>

void square_iterator_demo() {

  SquareIterator begin{2};
  SquareIterator end{6};

  std::for_each(begin, end, [](int sqr) {
    std::cout << "sqr: " << sqr << std::endl;
  });

  // output
  // sqr: 4
  // sqr: 9
  // sqr: 16
  // sqr: 25
}

int main() {
  square_iterator_demo();
}