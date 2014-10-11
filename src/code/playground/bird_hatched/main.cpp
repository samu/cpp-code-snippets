#include <iostream>

using namespace std;

struct Animal {
  void move()          { cout << "---" << endl; }
  virtual void eat()   { cout << "mmm" << endl; }
  Animal() { cout << "animal born" << endl; }
  ~Animal() { cout << "animal died" << endl; }
};

struct Bird : Animal {
  void sing() { cout << "chirp" << endl; }
  virtual void move() { cout << "fly" << endl; }
  Bird() { cout << "bird hatched" << endl; }
  ~Bird() { cout << "bird crashed" << endl; }
};

struct Scavenger : Animal {
  void eat() { cout << "schmatz" << endl; }
  Scavenger() { cout << "a scavenger is born" << endl; }
  ~Scavenger() { cout << "new carrion" << endl; }
};

struct Marabu : Bird, Scavenger {
  virtual void sing() { cout << "bubu" << endl; }
  void move() { cout << "stalk" << endl; }
  void eat() { cout << "pock pock" << endl; }
  Marabu() { cout << "a marabu hatched" << endl; }
  ~Marabu() { cout << "marabu deceased" << endl; }
};

struct Vulture : Scavenger, Bird {
  virtual void sing() { cout << "cry" << endl; }
  void eat() { cout << "pick pick" << endl; }
  Vulture() { cout << "a vulture hatched" << endl; }
  ~Vulture() { cout << "vulture crashed" << endl; }
};

int main() {
  cout << "(a)-------------------------------" << endl;
  Vulture v;
  Marabu m;
  Bird b(v);
  Scavenger *s(&m);
  cout << "(b)-------------------------------" << endl;
  v.sing();
  v.eat();
  cout << "(c)-------------------------------" << endl;
  b.sing();
  b.move();
  cout << "(d)-------------------------------" << endl;
  s->move();
  s->eat();
  cout << "(e)-------------------------------" << endl;
  s = &v;
  s->move();
  s->eat();
  cout << "(f)-------------------------------" << endl;
}








// 2011

// struct Bird {
//   void sing() {
//     cout << "chirp" << endl;
//   }
//   virtual void move() {
//     cout << "fly" << endl;
//   }
//   Bird() { cout << "bird hatched" << endl; }
//   ~Bird() { cout << "bird crashed" << endl; }
// };

// struct Scavenger {
//   virtual void eat() {
//     cout << "mmmh" << endl;
//   }
//   void move() {
//     cout << "aaaah" << endl;
//   }
//   Scavenger() { cout << "a scavenger is born" << endl; }
//   ~Scavenger() { cout << "new carrion" << endl; }
// };

// struct Vulture : Bird, Scavenger {
//   virtual void sing() {
//     cout << "bubu" << endl;
//   }
//   void move() {
//     cout << "walk" << endl;
//   }
//   void eat() {
//     cout << "pick pick" << endl;
//   }
//   Vulture() { cout << "a vulture hatched" << endl; }
//   ~Vulture() { cout << "vulture deceased" << endl; }
// };

// int main() {
//   cout << "a ----------------" << endl;
//   Vulture v;
//   Bird &b(v);
//   Scavenger s;
//   s = v;
//   cout << "b ----------------" << endl;
//   v.sing();
//   v.move();
//   v.eat();
//   cout << "c ----------------" << endl;
//   b.sing();
//   b.move();
//   cout << "d ----------------" << endl;
//   s.move();
//   s.eat();
//   cout << "e ----------------" << endl;
// }