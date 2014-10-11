void mutable_demo() {
  int n = 1;

  // if we wanted to change a captured variable inside a lambda, we have to define
  // the lambda mutable. note that this is different to using the ampersand syntax,
  // since the changes wont be reflected to the outside.
  auto lambda = [n]() mutable {
    n = 2;

    // if we didnt specify mutable, the following compiler error would occur:
    //  ^  error: assignment of read-only variable ‘n’
  };

  // n has only been changed inside the lambda
  std::cout << "n: " << n << std::endl;

  // output
  // n: 1
}