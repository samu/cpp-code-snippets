#include <iterator>

struct SquareIterator : std::iterator<std::input_iterator_tag, int>
{
  explicit SquareIterator(int start=0) : value{start} {}

  bool operator ==(SquareIterator const &r) const {
    return value == r.value;
  }

  bool operator !=(SquareIterator const &r) const {
    return !(*this == r);
  }

  value_type operator *() const {
    return value * value;
  }

  SquareIterator& operator ++() {
    ++value;
    return *this;
  }

  SquareIterator operator ++(int) {
    auto old = *this;
    ++(*this);
    return old;
  }

private:

  int value;

};
