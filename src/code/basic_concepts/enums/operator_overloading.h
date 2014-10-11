#include <iostream>

enum Belt { Yellow, Orange, Green, Blue, Brown, Black };
//          0       1       2      3     4      5

Belt operator++(Belt &belt) {
  int tmp = (belt + 1) % (Black + 1);
  belt = static_cast<Belt>(tmp);
  return belt;
}

void operator_overloading() {
  Belt belt{Brown};

  std::cout << "belt: " << belt << std::endl;
  ++belt;
  std::cout << "belt: " << belt << std::endl;
  ++belt;
  std::cout << "belt: " << belt << std::endl;

  // output
  // belt: 4
  // belt: 5
  // belt: 0

  // calling this directly does not work
  // ++Green;
  // ^  error: no match for ‘operator++’ in ‘++(Belt)2u’
}
