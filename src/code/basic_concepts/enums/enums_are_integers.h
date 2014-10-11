#include <iostream>

void enums_are_integers() {
  enum season { Spring, Summer, Autumn, Winter };
  //            0       1       2       3

  int summer = Summer;
  std::cout << "summer: " << summer << std::endl;
  std::cout << "Summer + Winter: " << Summer + Winter << std::endl;

  // output
  // summer: 1
  // Summer + Winter: 4

  // increment or decrement does not work however:
  //
  // Spring++;
  //       ^  error: no ‘operator++(int)’ declared for postfix ‘++’ [-fpermissive]
}
