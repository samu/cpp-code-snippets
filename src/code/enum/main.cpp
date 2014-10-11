#include <iostream>

#include "Date.h"


int main() {

  Date date1{1,0,1};

  Date date2{Feb, 1, 1};

  Date date3{1, Mar, 1};

  std::cout << date1.getMonth();

  std::cout << date2.getMonth();

  std::cout << date3.getMonth();

}