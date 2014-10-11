#include <iostream>
#include <numeric>
#include <vector>
#include <map>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <memory>

using namespace std;

struct A {
  A() {}
  int i = 1;

  virtual void nop() = 0;
//     ^  error: initializer specified for non-virtual method ‘void A::nop()’ %bamprog%
};

void bla() {
}

int main() {


}