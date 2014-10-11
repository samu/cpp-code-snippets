#include <stdexcept>

void throwing_std_exceptions() {
  try {
    throw std::logic_error{"something weird happend"};
  } catch (std::logic_error e) {}
}

// other exceptions include
//
// std::logic_error
// std::domain_error
// std::invalid_argument
// std::length_error
// std::out_of_range
// std::runtime_error
// std::range_error
// std::overflow_error
// std::underflow_error