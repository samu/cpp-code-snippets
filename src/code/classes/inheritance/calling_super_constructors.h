struct Furniture {
  Furniture() { std::cout << "furniture created" << std::endl; }
};

struct Table : Furniture {
  Table() { std::cout << "table created" << std::endl; }
};

struct WoodenTable : Table {

  // we can call a constructor of the direct base class
  WoodenTable() : Table{} {
    std::cout << "wooden table created" << std::endl;
  }

  // if we try to call a constructor from the base type Furniture, we get a
  // compiler error:
  // WoodenTable() : Furniture{} {
  //                 ^  error: type ‘Furniture’ is not a direct base of ‘WoodenTable’
  // }

  // we can also delegate an other constructor of the same type. the delegation is
  // called first:
  WoodenTable(int i) : WoodenTable{(double) i} {
    std::cout << "wooden table created with " << i << std::endl;
  }

  WoodenTable(double i) {
    std::cout << "doing more " << i << std::endl;
  }

};

void calling_super_constructors() {
  // calling the constructor which calls the constructor of the direct base:
  WoodenTable table1{};
  // furniture created
  // table created
  // wooden table created

  // calling the constructor which delegates to a constructor in the same type.
  // note how the delegation is called first:
  WoodenTable table2{0};
  // furniture created
  // table created
  // doing more 0
  // wooden table created with 0
}