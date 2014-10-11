void scenarios() {
  const int a = 1;
  const int * const ap = &a;

  int c = 1;
  int * const cp = &c;
}

void bla() {
  int a = 1;
  const int * ap = &a;

  const int b = 1;
  // int * bp = &b;
  //             ^  error: invalid conversion from ‘const int*’ to ‘int*’
}

const int * blapp() {

}

// struct Basis {
//   Basis(const int c = 0)
//   : counter(c)
//   {}
// protected:
//   const int counter;
// };

// class Zaehler : public  Basis {
// public:
//   const Zaehler(int const & c) {
// //              ^  error: expected unqualified-id before ‘int’ %bamprog%
// //              ^  error: expected ‘)’ before ‘int’ %bamprog%
//     // ++counter;
//   }

//   // const int operator-(int const &tosub) {
//   //   this->counter -= tosub;
//   //   ++tosub;
//   //   return const_cast<Zaehler const *>(this)->current();
//   // }

//   // int const & current() const {
//   //   return (*this).counter;
//   // }
// };

