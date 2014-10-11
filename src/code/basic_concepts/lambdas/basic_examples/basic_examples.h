#include <iostream>
#include <string>

void nothing() {
  auto gapin_void = [ ]( ){ };
  //                 ^ ------------- captures
  //                    ^ ---------- parameters
  //                       ^ ------- implementation

  gapin_void(); // calling a lambda is syntactically similar to calling a function
}

void say_hi() {
  auto hello_thing = [](std::string thing) {
    std::cout << "hello " << thing << "!" << std::endl;
    return true;
  };

  bool result = hello_thing("world");

  std::cout << "result: " << result << std::endl;

  // output
  // hello world!
  // result: 1
}
