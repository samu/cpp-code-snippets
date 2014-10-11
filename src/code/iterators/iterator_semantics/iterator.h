#include <iostream>
#include <iterator>
#include <vector>

void iterator() {
  std::vector<int> v{0, 1, 2, 3, 4};

  // 0 1 2 3 4
  // ^ v.begin()

  // 0 1 2 3 4
  //           ^ v.end()

  // 0 1 2 3 4
  //         ^ --v.end()

  std::cout << "*v.begin():   " << *v.begin()   << std::endl;
  std::cout << "*v.end():     " << *v.end()     << std::endl;
  std::cout << "*(--v.end()): " << *(--v.end()) << std::endl;

  // output
  // *v.begin():   0
  // *v.end():     (undefined behaviour)
  // *(--v.end()): 4
}
