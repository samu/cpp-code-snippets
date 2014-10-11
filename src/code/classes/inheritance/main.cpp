#include "basic_example.h"
#include "pure_virtual_function.h"
// #include "constructor_calls.h"
#include "humming_bird.h"
#include "object_slicing.h"
#include "object_slicing_with_reference_and_virtual.h"
#include "member_hiding_problem.h"
#include "calling_super_constructors.h"

int main() {
  // basic_example();
  // pure_virtual_function();
  // constructor_calls();
  // humming_bird();
  // example_1::object_slicing();
  example_2::object_slicing();
  // member_hiding_problem();
  // calling_super_constructors();
}