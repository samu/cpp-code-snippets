#include <ostream>
#include <stdexcept>

struct ToggleButton {

  void hit_button() {
    state = static_cast<State>((state + 1) % 3);
  }

  void print(std::ostream &out) const {
    if (state == State::OFF) {
      out << "OFF";
    } else if (state == State::ON) {
      out << "ON";
    } else if (state == State::BLINK) {
      out << "Blink";
    } else {
      throw std::invalid_argument {"Unkown state"};
    }
  }

private:

  enum State : short {
    OFF, ON, BLINK
  };

  State state { State::OFF };

};

std::ostream& operator<<(std::ostream &out, ToggleButton const &button) {
  button.print(out);
  return out;
}