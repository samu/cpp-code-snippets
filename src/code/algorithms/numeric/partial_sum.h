void partial_sum_demo() {
  // 1 =                  1
  // 1 + 2 =              3
  // 1 + 2 + 3 =          6
  // 1 + 2 + 3 + 4 =     10
  // 1 + 2 + 3 + 4 + 5 = 15

  std::vector<int> v{1, 2, 3, 4, 5};
  std::vector<int> r(5);

  std::partial_sum(v.begin(), v.end(), r.begin());

  std::copy(r.begin(), r.end(), std::ostream_iterator<int>(std::cout, " "));

  // output
  // 1 3 6 10 15
}