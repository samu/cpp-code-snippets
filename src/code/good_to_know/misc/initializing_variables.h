void initializing_variables() {
  int a{1};     // initialized with 1
  int b{};      // default initialization (in case of int zero)
  int c;        // undefined behaviour
  static int d; // zero initialized

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
  std::cout << "d: " << d << std::endl;

  // output
  // a: 1
  // b: 0
  // c: 7
  // d: 0
}