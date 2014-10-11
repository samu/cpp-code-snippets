#include <iostream>
#include <ostream>
#include <string>

using String = std::string;

struct Word {
  String word;
  Word() {}
  Word(String word) : word(word) {}

  void operator<<(String str) {
    word = str;
  }

  bool operator<(Word comparable) {
    return true;
  }

  // Beim += Operator macht es auch Sinn, *this zurückzugeben, da man z.B.
  // schreiben kann: (a += 2) + 2
  Word& operator+=(Word& other_word) {
    word = word + other_word.word;
    return *this;
  }

  Word& operator+(Word& other_word) {
    word = word + other_word.word;
    return *this;
  }

};

// Diese Methode muss global definiert sein!
// Der erste Parameter out sollte auch zurück gegeben werden, sodass man die
// Aufrufe verketten kann!
std::ostream& operator<<(std::ostream& out, Word word) {
  return out << word.word;
}

// void operator<(Word w1, Word w2) {}
//
// Diese Definition des operator< ist das selbe wie sie in der Klasse Word
// definiert ist und würde folgenden error verursachen:
// error: ambiguous overload for 'operator<'

int main() {
  Word w1{"yoyo"};
  Word w2{};

  w2 << "blabla";

  std::cout << w1 << " " << w2 << "\n";

  w1 += w2;

  auto abc = w1 + w2;

  std::cout << w1 << " " << w2 << "\n";

}