#include <iostream>

void indices_can_be_defined() {
  enum season { Spring = 10, Summer, Autumn, Winter };
  //            10           11      12      13
  std::cout << "Spring: " << Spring << std::endl;
  std::cout << "Winter: " << Winter << std::endl;
  // output
  // Spring: 10
  // Winter: 13

  enum brand { Feldschloesschen = 1, Calanda, Quoellfrisch,
  //           1                     2        3
               Budweiser = 10, Heineken, SanMiguel };
  //           10              11        12

  std::cout << "Feldschloesschen: " << Feldschloesschen << std::endl;
  std::cout << "Calanda: " << Calanda << std::endl;
  std::cout << "Quoellfrisch: " << Quoellfrisch << std::endl;
  std::cout << "Budweiser: " << Budweiser << std::endl;
  std::cout << "Heineken: " << Heineken << std::endl;
  std::cout << "SanMiguel: " << SanMiguel << std::endl;
  // output
  // Feldschloesschen: 1
  // Calanda:          2
  // Quoellfrisch:     3
  // Budweiser:       10
  // Heineken:        11
  // SanMiguel:       12
}

// enum class d_o_w
//   Was ist der Unterschied? Bezeichner sind nicht in einem bestimmten Scope drin
//   und global verwendbar.
