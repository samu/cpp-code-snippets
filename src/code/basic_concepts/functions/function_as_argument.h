double maybe(double d) {
}

// we can define functions as parameters with the following syntax:
void call_me(double f(double)) {
  f(1);
}

void function_as_argument() {
  call_me(maybe);

  // we can also pass in a lambda with the same signature:
  auto for_sure = [](double d) {return .0;};
  call_me(for_sure);
}