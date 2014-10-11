#include <iostream>
#include <functional>

void auto_vs_function() {
  // in the previous example we saw how the lambda was assigned to a variable of
  // type auto. we can also use std::function<signature>:
  std::function<void(double)> p1 = [](double a){  };
  std::function<double(double)> p2 = [](double a){ return .0; };

  // checking if something was assigned to a function instance:
  if (p1) {
    std::cout << "p1 does something" << std::endl;
  }

  // output
  // p1 does something
}