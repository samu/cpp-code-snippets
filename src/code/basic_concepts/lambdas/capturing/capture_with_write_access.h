#include <string>
#include <iostream>

void capture_with_write_access() {
  std::string name{"batman"};

  std::cout << name << std::endl;

  auto change = [&name]() {
    name = "spiderman";
  };

  change();

  std::cout << name << std::endl;

  // output
  // batman
  // spiderman
}