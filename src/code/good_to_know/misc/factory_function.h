#include <stdexcept>

namespace Galaxy {
  struct Planet {
    Planet() = default;

    Planet(int distance) {
      if (distance < 0) throw std::invalid_argument("");
    }

    int distance;
  };

  Planet make_planet(int distance)
  try {
    return Planet{distance};
  } catch(std::invalid_argument e) {
    return Planet{};
  }
}