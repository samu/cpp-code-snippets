#include <iostream>
#include <iterator>
#include <algorithm>

struct MyOstreamIterator
: std::iterator<std::output_iterator_tag, int>  {

  explicit MyOstreamIterator(std::ostream& out) : out{&out} {}

  MyOstreamIterator& operator =(const int value) {
    *out << value;
    return *this;
  }

  MyOstreamIterator& operator *() { return *this; }
  MyOstreamIterator& operator ++() { return *this; }
  MyOstreamIterator& operator ++(int) { return *this; }

private:

  std::ostream* out;

};

void my_ostream_iterator_demo() {
  MyOstreamIterator moi{std::cout};

  moi = 1;
  moi = 20;
  moi = 300;

  // output
  // 120300
}
