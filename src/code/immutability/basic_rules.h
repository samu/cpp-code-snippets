void const_value_syntax() {

  // when we declare a value const, it does not matter whether the const keyword is
  // before or after the type:
  const int a = 1;
  int const b = 1;

  // a = 2;
  //     ^  error: assignment of read-only variable ‘a’
  // b = 2;
  //     ^  error: assignment of read-only variable ‘b’

}

void const_pointer_syntax() {
  // if the const keyword comes after the astrisk, the pointer itself will be const:
  int a = 1;
  int * const ap = &a;

  *ap = 2;

  // ap++;
  // ^  error: increment of read-only variable ‘ap’
}