void accumulate_demo() {
  std::vector<int> v{1, 2, 3, 4, 5};

  int sum = std::accumulate(v.begin(), v.end(), 10);
  std::cout << "sum: " << sum << std::endl;

  int fac = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
  //                                            ^ multiplication with 0 = 0!
  std::cout << "fac: " << fac << std::endl;

  // output
  // sum: 25
  // fac: 120
}