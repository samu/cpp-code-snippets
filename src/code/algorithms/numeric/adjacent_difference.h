void adjacent_difference_demo() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::vector<int> d1{};
  std::vector<int> d2{};

  std::adjacent_difference(v.begin(), v.end(), std::back_inserter(d1));
  std::adjacent_difference(v.begin(), v.end(), std::back_inserter(d2),
                           std::plus<int>());

  std::copy(d1.begin(), d1.end(), std::ostream_iterator<int>{std::cout, " "});
  std::cout << std::endl;
  std::copy(d2.begin(), d2.end(), std::ostream_iterator<int>{std::cout, " "});

  // output
  // 1 1 1 1 1 1 1 1 1
  // 1 3 5 7 9 11 13 15 17
}