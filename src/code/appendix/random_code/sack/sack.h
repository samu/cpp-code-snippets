#ifndef SACK_H_
#define SACK_H_

#include<vector>
#include<map>
#include <iterator>

template <typename T, template<typename...> class C=std::vector>
class Sack
{
   using SackType=C<T>;
   using size_type=typename SackType::size_type;
   SackType theSack{};

public:
   Sack(std::initializer_list<T> const &items) :
     theSack(items) {
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
#endif /* SACK_H_ */