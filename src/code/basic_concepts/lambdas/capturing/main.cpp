#include "capture_for_internal_use.h"
#include "capture_with_write_access.h"
#include "capture_everything.h"
#include "mutable.h"

int main() {
  // capture_for_internal_use();
  // capture_with_write_access();
  capture_everything_by_reference();
  capture_everything_by_value();
  // mutable_demo();
}