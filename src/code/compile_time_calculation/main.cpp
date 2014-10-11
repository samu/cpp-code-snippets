#include "constexpr.h"
// #include "literal_type.h"
#include "static_assert.h"
#include "ring5.h"
#include "user_defined_literals.h"

int main() {
  constexpr_demo();
  static_assert_demo();
  user_defined_literals();
}