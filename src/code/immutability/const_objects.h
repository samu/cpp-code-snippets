void init_demo() {
  // if we define a variable const, it must be initialized:
  // const int number;
  //           ^  error: uninitialized const ‘number’ [-fpermissive]

  const int number{0};
}

struct Cat {

  int age;

  void increaseAge() {
    age++;
  }

  // Because this function is declared const, it is not possible to modify members
  // of Cat.
  // Also, it is not possible to call member functions that are NOT declared const.
  void growUp() const {
    // age++;
    // ^  error: increment of member 'Cat::age' in read-only object

    // increaseAge();
    // ^  error: no matching function for call to 'Cat::increaseAge() const'
  }

  // Functions can be overloaded with the const keyword:
  // The non-const version will be called if the object itself is not const.
  // The const version will be called if the object itself is const.
  void notAmbiguous() {}

  void notAmbiguous() const {}

};

void const_functions() {
  Cat cat{};
  const Cat const_cat{};

  // calling a const function on a non const object is possible:
  cat.growUp();

  // calling a non-const function on a const object is not possible:
  // const_cat.increaseAge();
  //           ^  error: no matching function for call to ‘Cat::increaseAge() const’

  // calling functions overloaded with the const keyword depends on whether the
  // object is const itself:
  cat.notAmbiguous();
  const_cat.notAmbiguous();
}