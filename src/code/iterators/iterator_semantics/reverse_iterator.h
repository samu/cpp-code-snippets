void reverse_iterator() {
  std::vector<int> v{10, 11, 12, 13, 14};

  // 10 11 12 13 14
  //             ^ v.rbegin()

  // 10 11 12 13 14
  //          ^ v.rbegin() + 1

  //   10 11 12 13 14
  // ^ v.rend()

  //     10 11 12 13 14
  // ^ v.rend() + 1

  // 10 11 12 13 14
  // ^ v.rend() - 1

  std::vector<int>::reverse_iterator rbegin = v.rbegin();
  std::vector<int>::reverse_iterator rend = v.rend();

  std::cout << "*rbegin:       " << *rbegin       << std::endl;
  std::cout << "*(rbegin + 1): " << *(rbegin + 1) << std::endl;
  std::cout << "*rend:         " << *rend         << std::endl;
  std::cout << "*(rend + 1):   " << *(rend + 1)   << std::endl;
  std::cout << "*(rend - 1):   " << *(rend - 1)   << std::endl;

  // output
  // *rbegin:       14
  // *(rbegin + 1): 13
  // *rend:         (undefined behaviour)
  // *(rend + 1):   (undefined behaviour)
  // *(rend - 1):   10
}