void chars() {
  char a;
  a = 'a';
  a = '\n';
  a = '\x0a';
}

void integers() {
  int i =        1;
  long l =       1L;
  long long ll = 1LL;
}

void unsigned_integers() {
  unsigned int ui =        1u;
  unsigned long ul =       1ul;
  unsigned long long ull = 1ull;
}

void octal_hex_full() {
  int octal =       020;
  int hex =         0x1f;
  long long full =  0XFULL;
}

void floating_points() {
  float f =        0.1f;
  double d1 =      .33;
  double d2 =      1e9;
  long double d3 = 42.E-12L;
  long double d4 = .3l;
}

void char_array() {
  char a[] = "hello"; // char[6] {'h', 'e', 'l', 'l', 'o', '\0'}
                      // '\0' terminates the string
}