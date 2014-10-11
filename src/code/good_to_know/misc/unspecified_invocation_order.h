int get_a() {
  std::cout << "get_a()" << std::endl;
  return 0;
}

int get_b() {
  std::cout << "get_b()" << std::endl;
  return 0;
}

void random_function_name(int a, int b) { }

void unspecified_invocation_order() {
  // if we call functions to pass arguments to another function, we don't know in
  // which order the functions are called.
  random_function_name(get_a(), get_b());

  // output could for example be
  // get_b()
  // get_a()
}