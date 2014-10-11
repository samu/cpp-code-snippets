template <typename T>
class Sack<T, std::map> {
  using SackType = std::map<T, unsigned>;
  using size_type=typename SackType::size_type;
  SackType theSack{};

public:
  bool empty() {
    return theSack.empty();
  }

  size_type size() {
    size_type total = 0;
    for (std::pair<T, unsigned> pair : theSack) {
      total += pair.second;
    }

    return total;
  }

  void putInto(T const &item) {
    theSack[item]++;
  }

  T getOut() {
     if (empty()) {
       throw std::logic_error{"empty Sack"};
     }

     auto index = static_cast<size_type>(rand() % size());

     std::pair<T, unsigned> element = *std::next(theSack.begin(), index);

     if (element.second == 1) {
       theSack.erase(element.first);
     } else {
       theSack[element.first] = element.second -1;
     }
     return element.first;
  }
};