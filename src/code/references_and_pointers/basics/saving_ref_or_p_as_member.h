#include <iostream>
#include <sstream>
#include <string>

struct Exp1 {
  Exp1(std::ostream& out) : out(out) {}

  void write(std::string something) {
    out << something << std::endl;
  }

  std::ostream& out;
};

struct Exp2 {
  Exp2(std::ostream& out) : out(&out) {}
  //                            ^--- address of out
  //
  //               ^--- reference to out

  void write(std::string something) {
    *out << something << std::endl;
  }

  std::ostream* out;
};

void saving_ref_or_p_as_member() {
  Exp1 exp_1{std::cout};
  Exp2 exp_2{std::cout};

  exp_1.write("this comes from exp_1");
  exp_2.write("this comes from exp_2");

  // output
  // this comes from exp_1
  // this comes from exp_2
}