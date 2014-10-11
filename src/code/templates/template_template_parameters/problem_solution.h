// #include <vector>
// #include <string>
// #include <list>

// template<typename T, template<typename...> class container = std::vector>
// struct Sack {
//   void name() {

//   }
// };

// void problem() {
//   Sack<int, std::list> my_sack;

//   my_sack.name();
// }

#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <stdexcept>

template <typename T, template<typename...> class C=std::vector>
class Sack
{
   using SackType=C<T>;
   using size_type=typename SackType::size_type;
   SackType theSack{};

public:
   Sack(std::initializer_list<T> const &items) :
     theSack(items) {
      std::cout << "oh hi!" << std::endl;
   }

   bool empty() const {
     return theSack.empty();
   }

   size_type size() const {
     return theSack.size();
   }

   void putInto(T const &item) {
     theSack.push_back(item);
   }

   T getOut() {
     if (empty()) {
       throw std::logic_error{"empty Sack"};
     }

     auto index = static_cast<size_type>(rand() % size());

     T retval { theSack.at(index) };
     theSack.erase( theSack.begin() + index);
     return retval;
   }
};

template <typename T>
class Sack<T, std::map> {
  using SackType = std::map<T, unsigned>;
  using size_type=typename SackType::size_type;
  SackType theSack{};

public:

  Sack() {
    std::cout << "hehehe!" << std::endl;
  }

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

void blabla() {
  Sack<int> sack{};

  Sack<int, std::map> sack_with_map{};
}