#include "word.h"

#include <istream>
#include <ostream>
#include <string>
#include <algorithm>
#include <sstream>

Word::Word(std::string word):data{} {
  std::istringstream in{word};
  read(in);
}

void Word::read(std::istream& in) {
  data.clear();

  char c{};
  while(in.get(c)) {
    if(std::isspace(c) && !isValid()) continue;

    if(std::isalpha(c)) {
      data.push_back(c);
    } else {
      break;
    }
  }
}

std::string Word::toLower() const {
  std::string lowered{data};
  std::transform(lowered.begin(), lowered.end(), lowered.begin(), tolower);
  return lowered;
}

std::istream& operator>>(std::istream& l, Word& r) {
  r.read(l);
  return l;
}

std::ostream& operator<<(std::ostream& l, Word const& r) {
  r.write(l);
  return l;
}
