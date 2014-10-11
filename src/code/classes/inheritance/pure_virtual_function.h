struct Drink {
  // a pure virtual function can be compared to an abstract method in Java.
  // as soon as a class contains this kind of function, the type becomes abstract
  // and can not be instantiated.
  // we can declare pure virtual functions with the following syntax:
  virtual void prepare() = 0;
};

struct Beer : Drink {
  void prepare() {}
};

struct Rivella : Drink {
  // we dont have to implement prepare() here.
  // however, the type Rivella will remain abstract.
};

void pure_virtual_function() {
  // trying to instantiate an object of abstract type Drink causes an error:
  // Drink drink{};
  //             ^  error: cannot allocate an object of abstract type 'Drink'

  // we cant instantiate an object of type Rivella because it is abstract:
  // Rivella rivella{};
  //                 ^  error: cannot allocate an object of abstract type 'Rivella'

  Beer beer{};
}