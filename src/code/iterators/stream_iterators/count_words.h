void count_words() {
  std::istringstream in{"oppa gangnam style :D"};

  // this iterator will read char sequences that are separated by white spaces:
  using Iterator = std::istream_iterator<std::string>;
  Iterator begin{in};
  Iterator end{};

  int count = std::distance(begin, end);

  std::cout << "count: " << count << std::endl; // count: 4
}
