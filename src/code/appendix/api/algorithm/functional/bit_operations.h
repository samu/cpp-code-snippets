// bit_and                Bitwise AND function object class
T operator() (const T& x, const T& y) const {return x&y;}

// bit_or                 Bitwise OR function object class
T operator() (const T& x, const T& y) const {return x|y;}

// bit_xor                Bitwise XOR function object class
T operator() (const T& x, const T& y) const {return x^y;}

// logical_and            Logical AND function object class
bool operator() (const T& x, const T& y) const {return x&&y ;}

// logical_not            Logical NOT function object class
bool operator() (const T& x) const {return !x;}

// logical_or             Logical OR function object class
bool operator() (const T& x, const T& y) const {return x||
  y;}
