// plus                   Addition function object class
T operator() (const T& x, const T& y) const {return x+y;
}

// minus                  Subtraction function object class
T operator() (const T& x, const T& y) const {return x-y;}

// multiplies             Multiplication function object class
T operator() (const T& x, const T& y) const {return x*y;}

// divides                Division function object class
T operator() (const T& x, const T& y) const {return x/y;
}

// modulus                Modulus function object class
T operator() (const T& x, const T& y) const {return x%y
  ;}

// negate                 Negative function object class
T operator() (const T& x) const {return -x;}
