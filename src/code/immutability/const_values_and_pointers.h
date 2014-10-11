void value_is_const() {
  const int value = 5;

  // This pointer points to a variable of type const int. The pointer itself is not
  // const and can be modified:
  const int * value_p = &value;
  value_p++;

  // Changing the value which is pointed by the pointer is not possible:
  // *value_p = 6;
  //            ^  error: assignment of read-only location '* value_p'

  // We can define a pointer of type const int eventhough it does not point to a
  // const variable:
  int not_const = 5;
  const int * not_const_p = &not_const;

  // *not_const_p = 6;
  //                ^  error: assignment of read-only location ‘* not_const_p’
}

void pointer_is_const() {
  int value = 5;

  // This pointer is const and can not be modified:
  int* const value_p = &value;
  // value_p++;
  //        ^  error: increment of read-only variable 'value_p'
}

void pointer_and_value_are_const() {
  const int value = 5;

  // Here we define a pointer which both points to a const variable and is const
  // itself:
  const int* const value_p = &value;
  // *value_p = 6;
  //            ^  error: assignment of read-only location '*(const int*)value_p'
  // value_p++;
  //        ^  error: increment of read-only variable 'value_p'

  // Also note that putting the asterisk at the right place is critical:
  // const int const *value_p = &value;
  // ^  error: duplicate 'const'
}
