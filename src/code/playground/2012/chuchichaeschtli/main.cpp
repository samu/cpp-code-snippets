#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
#include <cctype>

int main() {
  using namespace std;
  string const input("Chuchichaeschtli");
  cout << hex << input.size() << dec << endl;          // 0
  cout << char(* input.begin() + 1) << endl;           // 1
  set<char> const s(input.begin(), input.end());

  copy(s.begin(), s.end(), ostream_iterator<char>(cout, " "));
  cout << endl;

  cout << s.size() << endl;                            // 2
  cout << * s.begin() << endl;                         // 3

  set<char>::iterator it1 = s.begin(); it1++;
  cout << * it1 << endl;                               // 4

  set<char>::reverse_iterator it2 = s.rend(); advance(it2, -3);
  cout << * it2 << endl;                               // 5

  set<char>::iterator it3 = s.end(); advance(it2, 3);
  cout << * it3 << endl;                               // 6

  it3 = s.end(); it3--; it3--;                         // 7
  cout << * --it3 << endl;

  string new_str(input);

  transform(new_str.begin(), new_str.end(), new_str.begin(), [](const char & c) {
    return toupper(c);
  });

  set<char> s2(new_str.begin(), new_str.end());
  copy(s2.begin(), s2.end(), ostream_iterator<char>(cout, " "));

}