#include <string>

std::string PIE{"omnom"};

void capture_everything_by_reference() {
  double PI = 3.141;

  auto wicked_lambda = [&]() {
    PIE = "mjam";
    PI = 3.142;
  };

  wicked_lambda();
}

void capture_everything_by_value() {
  double PI = 3.141;

  auto wicked_lambda = [=]() {
    PIE = "mjam";
    // PI = 3.142;
    //      ^  error: assignment of read-only variable ‘PI’
  };

  wicked_lambda();
}