template<typename T>
void rotate_3_arguments(T& a, T& b, T& c) {
  T tmp = a;
  a = b;
  b = c;
  c = tmp;
}

void rotate_3_arguments_demo() {
  int a{0}, b{1}, c{2};
  rotate_3_arguments(a, b, c);
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;

  // output
  // a: 1
  // b: 2
  // c: 0
}