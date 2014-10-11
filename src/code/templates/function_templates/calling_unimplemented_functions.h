struct Lea {
  void call() {
  }
};

struct Julia {
};

template<typename T>
void call_me(T girl) {
  girl.call();
}

void calling_unimplemented_functions() {
  Lea lea{};
  Julia julia{};

  // will call call() on lea
  call_me(lea);

  // calling call_me() with julia will cause a compiler error:
  //
  // call_me(julia);
  //        ^  error: ‘struct Julia’ has no member named ‘call’
}