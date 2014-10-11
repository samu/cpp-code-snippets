template<typename T>
void take_two(T one, T two) {
}

void int_and_double_dilemma() {
  // the argument types to the following call to take_two() will be recoginzed by the
  // compiler as an integer followed by a double:
  //
  // take_two(1, 2.2);
  //                ^  error: no matching function for call to ‘take_two(int, double)’

  // here are two solutions how to avoid this:

  // with static_cast
  take_two(static_cast<double>(1), 2.2);

  // by specifying template argument
  take_two<double>(1, 2.2);
}