struct Ring5 {
  explicit constexpr
  Ring5(unsigned x=0u) : val{ x % 5 } {}

  constexpr unsigned value() const { return val; }

  constexpr operator unsigned() const { return val; }

  constexpr bool operator==(Ring5 const &r) const {
    return val == r.val;
  }

  constexpr bool operator!=(Ring5 const &r) const {
    return !(*this == r);
  }

  // this function can not be constexpr because it changes internal state.
  Ring5 operator+=(Ring5 const &r) {
    val = (val + r.value())%5;
    // this error would be raised if we tried to use constexpr:
    //                      ^  error: assignment of member val in read-only object
    return *this;
  }

  Ring5 operator*=(Ring5 const&r) {
    val = (val * r.value())%5;
    return *this;
  }

  constexpr Ring5 operator+(Ring5 const &r) const {
    return Ring5{val+r.val};
  }

  constexpr Ring5 operator*(Ring5 const &r) const {
    return Ring5{val*r.val};
  }

private:
  unsigned val;
};
