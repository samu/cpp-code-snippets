struct Dog {
  int age = 0;

  const int& getAge() {
    return age;
  }

  int& getMutableAge() {
    return age;
  }
};

void const_return_values() {
  Dog dog{};

  // variables declared const can not be modified
  const int& age = dog.getAge();
  // not possible:
  // age = 6;
  //       ^  error: assignment of read-only reference 'age'

  // not possible:
  // int& age = dog.getAge();
  //                        ^  error: invalid initialization of reference of type
  //                           'int&' from expression of type 'const int'

  int& muatable_age = dog.getMutableAge();

  // possible:
  muatable_age = 6;
}
