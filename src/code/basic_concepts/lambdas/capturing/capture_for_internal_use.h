void capture_for_internal_use() {
  int magic_number = 8616;

  // if we want to use previously declared variables inside a lambda, we have to
  // capture them. otherwise, a compiler error will occur:
  auto capturer = [magic_number]() {
    //                        ^--- capturing magic_number

    int copy = magic_number;

    // trying to change magic_number causes a compiler error
    // magic_number = 9548;
    //                ^  error: assignment of read-only variable ‘magic_number’
  };
  capturer();
}
