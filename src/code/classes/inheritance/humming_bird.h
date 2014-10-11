#include <iostream>

struct Animal {
  void makeSound() { std::cout << "---\n";}
  virtual void move() { std::cout << "---\n";}

  Animal() { std::cout << "animal born\n";}
  ~Animal() { std::cout << "animal died\n";}
};

struct Bird : Animal {
  virtual void makeSound() { std::cout << "chirp\n";}
  void move() { std::cout << "fly\n";}

  Bird() { std::cout << "bird hatched\n";}
  ~Bird() { std::cout << "bird crashed\n";}
};

struct Hummingbird :  Bird {
  void makeSound() { std::cout << "peep\n";}
  virtual void move() { std::cout << "hum\n";}

  Hummingbird() { std::cout << "hummingbird hatched\n";}
  ~Hummingbird() { std::cout << "hummingbird died\n";}
};

void humming_bird() {
  std::cout << "(a)----------------------------\n";
  Hummingbird hummingbird;
  Bird        bird = hummingbird; // ACTHUNG: es wird eine Kopie erstellt, das heisst
                                  // der konstruktor wird nicht aufgeerufen!
  Animal &    animal = hummingbird;
  // Animal      animal2 = hummingbird;

  std::cout << "(b)-----------------------------\n";
  hummingbird.makeSound();
  bird.makeSound();
  animal.makeSound();

  std::cout << "(c)-----------------------------\n";
  hummingbird.move();
  bird.move();
  animal.move();
  // animal2.move();

  std::cout << "(d)-----------------------------\n";
}

// animal born
// bird hatched
// hummingbird hatched
// (b)-----------------------------
// peep
// chirp
// ---
// (c)-----------------------------
// hum
// fly
// hum
// (d)-----------------------------
// bird crashed
// animal died
// hummingbird died
// bird crashed
// animal died