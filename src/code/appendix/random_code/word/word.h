#ifndef WORD_H_
#define WORD_H_

#include <iosfwd>
#include <string>

#include <boost/operators.hpp>

struct Word : boost::less_than_comparable<Word>, boost::equality_comparable<Word> {
  Word():data{} {}
  Word(std::string);

  bool isValid() { return !data.empty(); }
  void read(std::istream&);
  void write(std::ostream& os) const { os << data; };

  bool operator<(Word const& r) const { return toLower() < r.toLower(); }
  bool operator==(Word const& r) const { return toLower() == r.toLower(); }
  std::string operator+(std::string const& r) const { return data + r; }
private:
  std::string data;
  std::string toLower() const;
};

std::istream& operator>>(std::istream&, Word&);
std::ostream& operator<<(std::ostream&, Word const&);

#endif
