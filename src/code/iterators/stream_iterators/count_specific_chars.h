void count_specific_chars() {
  std::istringstream in{"oppa gangnam style"};

  using Iterator = std::istream_iterator<char>;
  Iterator begin{in};
  Iterator end{};

  int count = std::count(begin, end, 'a');

  std::cout << "count: " << count << std::endl; // count: 3
}
