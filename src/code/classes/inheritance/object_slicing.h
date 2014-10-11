#include <iostream>

namespace example_1 {
  struct Creature {
    void walk() {}
  };

  struct Ork : Creature {
    void grunt() {}
  };

  void object_slicing() {
    // creatures can walk
    Creature creature{};
    creature.walk();

    // orks can walk and grunt
    Ork ork{};
    ork.walk();
    ork.grunt();

    // here we make a copy of the ork instance.
    // since we declare copy_of_ork to be of type Creature, only the part of that
    // type is copied. copy_of_ork therefore can not grunt. this is called object
    // slicing:
    Creature copy_of_ork = ork;
    copy_of_ork.walk();
    // copy_of_ork.grunt();
    //             ^  error: 'struct Creature' has no member named 'grunt'
  }
}