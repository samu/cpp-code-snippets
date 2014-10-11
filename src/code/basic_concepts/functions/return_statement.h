#include <iostream>

int wild_function() {
  // the compiler automatically returns 1 if we dont define a return statement
}

void return_statement() {
  std::cout << "wild_function(): " << wild_function() << std::endl;

  // output
  // wild_function(): 1
}