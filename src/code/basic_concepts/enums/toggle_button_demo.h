#include "toggle_button.h"

void toggle_button_demo() {
  ToggleButton button{};

  std::cout << "button: " << button << std::endl;

  button.hit_button();

  std::cout << "button: " << button << std::endl;

  button.hit_button();

  std::cout << "button: " << button << std::endl;

  button.hit_button();

  std::cout << "button: " << button << std::endl;

  // output
  // button: OFF
  // button: ON
  // button: Blink
  // button: OFF
}
