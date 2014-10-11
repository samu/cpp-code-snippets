struct Basis {
  Basis(const int c = 0) : counter(++c) {} // const macht sinn
                                           // es verhindert ++c
protected:
  const int counter; // const ist falsch, weil uninitialisiert
};

class Zaehler : public const Basis { // const ist falsch
public:
  const Zaehler                   // const vor Konstruktor ist falsch
  (int const & c) : counter(c) {  // const ist unnötig
    ++counter;
  }

  const int operator-
  (int const &tosub)
  const {
    this->counter -= tosub;
    ++tosub;
    return const_cast<Zaehler const *>(this)->current();
  }

  int const & current() const {
    return (*this).counter;
  }
};


int * const // macht sinn, weil pointer
int & const // macht keinen sinn, weil referenz