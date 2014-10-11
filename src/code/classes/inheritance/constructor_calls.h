#include <iostream>

struct Furniture {
  Furniture() { std::cout << "furniture created" << std::endl; }
  ~Furniture() { std::cout << "furniture destroyed" << std::endl; }
};

struct Table : Furniture {
  Table() { std::cout << "table created" << std::endl; }
  ~Table() { std::cout << "table destroyed" << std::endl; }
};

struct WoodenTable : Table {
  WoodenTable() { std::cout << "wooden table created" << std::endl; }
  ~WoodenTable() { std::cout << "wooden table destroyed" << std::endl; }
};

void constructor_calls() {
  // the constructor of the base class is called first.
  // the constructor of the derived class is called last.
  // this order is reversed at the destruction of the object.
  WoodenTable wooden_table{};

  std::cout << "---" << std::endl;

  // output
  // furniture created
  // table created
  // wooden table created
  // ---
  // wooden table destroyed
  // table destroyed
  // furniture destroyed
}