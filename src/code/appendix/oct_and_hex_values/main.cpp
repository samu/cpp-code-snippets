#include <iostream> // std::cout, std::dec, std::hex, std::oct
#include <iomanip>

int main() {
  std::cout << std::setw(4) << std::dec << 0 << ":";
  for (int i = 1; i <= 100; i++) {
    std::cout << std::setw(4) << std::dec << i << " ";

    if (!(i % 10)) {
      std::cout << std::endl;
      std::cout << std::setw(4) << std::dec << i << ":";
    }
  }

  std::cout << std::endl;

  std::cout << std::setw(4) << std::dec << 0 << ":";
  for (int i = 1; i <= 100; i++) {
    std::cout << std::setw(4) << std::hex << i << " ";

    if (!(i % 10)) {
      std::cout << std::endl;
      std::cout << std::setw(4) << std::dec << i << ":";
    }
  }

  std::cout << std::endl;

  std::cout << std::setw(4) << std::dec << 0 << ":";
  for (int i = 1; i <= 100; i++) {
    std::cout << std::setw(4) << std::oct << i << " ";

    if (!(i % 10)) {
      std::cout << std::endl;
      std::cout << std::setw(4) << std::dec << i << ":";
    }
  }

  std::cout << std::endl;

  for (int i = 1; i <= 100; i++) {
    // std::cout << "[";
    std::cout << std::setw(3) << std::dec << i << " ";
    // std::cout << "] ";
    std::cout << std::setw(3) << std::hex << i << " ";
    std::cout << std::setw(3) << std::oct << i << " ";
    std::cout << "    ";

    if (!(i % 5)) {
      std::cout << std::endl;
    }
  }

}