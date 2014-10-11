void static_assert_demo() {
  // with static assert we can do assertions at compile time:
  const int i = 3;
  static_assert(i >= 3, "nooope");

  // if the assertion fails a compilation error is raised:
  // static_assert(i < 3, "nooope");
  // ^  error: static assertion failed: nooope

  // static_assert only works with constant conditions. working with the non-const
  // variable j will fail:
  int j = 3;
  // static_assert(j, "");
  // ^  error: non-constant condition for static assertion
  // ^  error: the value of ‘j’ is not usable in a constant expression
}