// equal_to               Function object class for equality comparison
bool operator() (const T& x, const T& y) const {return x==y;}

// not_equal_to           Function object class for non-equality comparison
bool operator() (const T& x, const T& y) const {return x!=y;}

// greater                Function object class for greater-than inequality comparison
bool operator() (const T& x, const T& y) const {return x>y;}

// greater_equal          Function object class for greater-than-or-equal-to comparison
bool operator() (const T& x, const T& y) const {return x>=y;}

// less                   Function object class for less-than inequality comparison
bool operator() (const T& x, const T& y) const {return x<y;}

// less_equal             Function object class for less-than-or-equal-to comparison
bool operator() (const T& x, const T& y) const {return x<=y;}
