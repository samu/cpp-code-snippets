#include <iostream>
#include <cctype>
#include <iterator>
#include <string>
#include <algorithm>

bool are_equal(char a, char b) {
  return tolower(a) == tolower(b);
}

bool is_palindrome(std::string word) {
  return std::equal(word.cbegin(),
                    word.cbegin() + word.length() / 2,
                    word.crbegin(),
                    are_equal);
}

void is_palindrome_demo() {
  std::cout << std::boolalpha;
  std::cout << is_palindrome("Rihanna") << std::endl;
  std::cout << is_palindrome("Anna") << std::endl;
  std::cout << is_palindrome("abcba") << std::endl;
  std::cout << is_palindrome("trugtimeinesohellehoseniemitgurt") << std::endl;

  // output
  // false
  // true
  // true
  // true
}