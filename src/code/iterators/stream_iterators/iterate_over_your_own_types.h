#include <string>
#include <algorithm>

struct Word {

  void read(std::istream& in) {
    in >> data;
    std::transform(data.begin(), data.end(), data.begin(), toupper);
  }

  void write(std::ostream& os) const {
    os << data;
  };

private:

  std::string data;

};

std::istream& operator>>(std::istream& in, Word& r) {
  r.read(in);
  return in;
}

std::ostream& operator<<(std::ostream& out, Word const& r) {
  r.write(out);
  return out;
}


void iterate_over_your_own_types() {
  using namespace std;

  istringstream in{"ill iterate until youre dizzy"};

  copy(istream_iterator<Word>{in}, istream_iterator<Word>{},
       ostream_iterator<Word>{cout, " "});

  // output
  // ILL ITERATE UNTIL YOURE DIZZY
}