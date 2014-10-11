// The parameter a is passed to this function as a reference and can be modified
// inside it.
void i_can_change_you(int& a) {
  a++;
}

// This function declares its parameter as a reference and const. Const means that
// this parameter can not be modified inside the function.
// However, it is possible to pass in a non-const variable.
void i_cannot_change_you(const int& a) {
  // a++;
  // ^  error: increment of read-only reference 'a'
}

int test_i_cannot_change_you() {
  // passing a non-const object to a function that declares the parameter const is
  // possible:
  int a = 1;
  i_cannot_change_you(a);
}

// This function declares its parameter not as a reference and const. Const still
// means that the object can not be modified, however this makes less sense than in
// the previous example since this parameter is passed by value and therefore is a
// copy anyways.
void i_cannot_change_you_inside(const int a) {
  // a ++;
  // ^  error: increment of read-only parameter 'a'
}

// The previous function declaration is the same as the following, which would be
// ambiguous:
// void i_cannot_change_you_inside(int a) {
//      ^  error: redefinition of 'void i_cannot_change_you_inside(int)'
// }
