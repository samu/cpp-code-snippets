#include <iostream>

struct Vehicle {
  void accelarate(int amount) {}
  void repair() {}
  void refuel() const { std::cout << "refueling vehicle" << std::endl; }
};

struct Toeff : Vehicle {
  // because we overload the accelarate function in a derived class, we have to
  // make the functions from the base class available with the following statement:
  using Vehicle::accelarate;

  void accelarate() {}
  void refuel() { std::cout << "refueling toeff" << std::endl; }
};

void member_hiding_problem() {
  Toeff t{};

  // calling a function from base type Vehicle
  t.repair();

  // calling accelarate defined in type Toeff
  t.accelarate();

  // calling accelarate defined in type Vehicle
  // this is only possible because using Vehicle::accelarate;
  t.accelarate(1);

  // if the using statement is not defined, the following compiler error is raised:
  // t.accelarate(1);
  //               ^  error: no matching function for call to ‘Toeff::accelarate(int)’

  // the const keyword wont hide overloaded functions. the function of the derived
  // class is called:
  t.refuel(); // output: refueling toeff

}