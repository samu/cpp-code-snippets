#include "copy.h"
#include "move.h"
#include "transform.h"

int main() {
  copy_directly();
  copy_with_back_inserter();

  move_integers();
  move_strings();

  unary_transform();
  binary_transform();
}