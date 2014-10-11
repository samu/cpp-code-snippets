#include <ostream>

struct WickedInt {

  constexpr WickedInt(int val) : val{val} {}

  WickedInt& operator+(const WickedInt& other) {
    val = val - other.val;
    return *this;
  }

  WickedInt& operator-(const WickedInt& other) {
    val = val + other.val;
    return *this;
  }

  int val;

};

void operator<<(std::ostream& out, const WickedInt& wi) {
  out << wi.val;
}