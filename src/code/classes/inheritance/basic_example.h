#include <iostream>

struct Instrument {
  // in this example, the keywoard virtual does not make a difference.
  // both the play() and mute() functions can be overridden in the derieved class.
  virtual void play() { std::cout << "instrument is being played" << std::endl; }
  void mute() { std::cout << "instrument muted" << std::endl; }
};

struct Drums : Instrument {
  // we dont have to define play as virtual here, the compiler will do this
  void play() { std::cout << "bumm bumm tsh" << std::endl; }
  void mute() { std::cout << "drums muted" << std::endl; }
};

void basic_example() {
  Instrument instrument{};
  instrument.play();
  instrument.mute();

  Drums drums{};
  drums.play();
  drums.mute();

  // output
  // instrument is being played
  // instrument muted
  // bumm bumm tsh
  // drums muted
}