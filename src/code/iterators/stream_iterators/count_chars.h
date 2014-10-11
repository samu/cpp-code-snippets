#include <iostream>
#include <sstream> // istringstream
#include <iterator>
#include <algorithm>

void count_all_chars_skip_whitespaces() {
  std::istringstream in{"ab c d !?  &*"};

  // istream_iterator<char> will iterator through every char in the stream, except
  // white spaces.
  using Iterator = std::istream_iterator<char>;
  Iterator begin{in};
  Iterator end{};

  // we could also use the count_if algorithm and use a lamda that always returns
  // true. distance is more elegant, however a bit abstract:
  int count = std::distance(begin, end);

  std::cout << "count: " << count << std::endl; // count: 8
}

void count_all_chars() {
  std::istringstream in{"ab c d !?  &*"};

  // using a istreambuf_iterator avoids skipping white spaces.
  using Iterator = std::istreambuf_iterator<char>;
  Iterator begin{in};
  Iterator end{};

  int count = std::distance(begin, end);

  std::cout << "count: " << count << std::endl; // count: 13
}
