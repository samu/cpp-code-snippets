#include <iostream>
#include <memory>

std::unique_ptr<int> create_on_heap(int i) {
  return std::unique_ptr<int>{new int{i}};
}

void unique_ptr_demo() {
  // a unique pointer can only exist once. we can not copy it. we can only move the
  // unique pointer to another variable, making the original variable invalid.

  auto p = create_on_heap(10);

  std::cout << std::boolalpha;
  std::cout << "is p valid? " << static_cast<bool>(p) << std::endl;

  auto j = std::move(p);
  // not possible:
  // auto j = p;

  std::cout << "is p valid? " << static_cast<bool>(p) << std::endl;

  // output:
  // is p valid? true
  // is p valid? false
}