#include "sort.h"
#include "copy.h"
#include "move.h"
#include "transform.h"

int main() {
  sort();

  // modifying algorithms
  copy_direct();
  copy_with_back_inserter();

  move_integers();
  move_strings();

  transform();
}