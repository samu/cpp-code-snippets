namespace example_2 {
  struct Creature {
    void walk() { std::cout << "creature is walking" << std::endl; }
    virtual void grunt() { std::cout << "creature is grunting" << std::endl;}
  };

  struct Ork : Creature {
    void walk() { std::cout << "ork is walking" << std::endl; }
    void grunt() { std::cout << "ork is grunting" << std::endl; }
  };

  void object_slicing() {
    Ork ork{};
    Creature  ork_c = ork;  // a copy of ork.
                            // contains the implementations of Creature only.
    Creature& ork_r = ork;  // a reference to an Ork object.
                            // delegates member calls to the implementations of
                            // Creature unless the member is declared virtual.
    Creature* ork_p = &ork; // a pointer to an Ork object. behaves the same way
                            // as the reference.

    // the following gets called on type Ork, as expected
    ork.walk();     // ork is walking
    ork.grunt();    // ork is grunting

    // the following gets called on type Creature due to object slicing
    ork_c.walk();   // creature is walking
    ork_c.grunt();  // creature is grunting

    // the following calls depend on whether the declarations are virtual or not.
    // if not declared virtual, the behaviour is the same as with object slicing.
    // if declared virtual, the calls are delegated to the original type Ork.
    ork_r.walk();   // creature is walking
    ork_r.grunt();  // ork is grunting

    ork_p->walk();   // creature is walking
    ork_p->grunt();  // ork is grunting
  }
}