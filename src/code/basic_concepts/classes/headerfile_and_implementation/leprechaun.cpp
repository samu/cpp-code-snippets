#include "leprechaun.h"

#include <iostream>
#include <string>

Leprechaun::Leprechaun(std::string s, int a) : secret{s}, age{a} {

}

int Leprechaun::get_age() {
  return age;
}

int main() {
  Leprechaun l{"likes justin bieber", 7};

  std::cout << "l.get_age(): " << l.get_age() << std::endl;

  // output
  // l.get_age(): 7
}

// inline function?