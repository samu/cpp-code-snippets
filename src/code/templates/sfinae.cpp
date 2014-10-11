#include <iostream>
#include <vector>
void foo(char i){
	std::cout << "foo(char):" << i << '\n';
}

void foo(unsigned i) {
  //
}


template <typename T>
typename T::size_type foo(T const &t){
	std::cout << "foo(T const &): ";
	return typename T::size_type{};
}

template <typename T>
void foo(T t) = delete;

int main(){
	foo(42); // geht nicht, weil int keinen member size_type hat
           // ambiguous (char und unsigned version)
           // man kann foo(42u) schreiben
           // foo(static_cast<unsigned>(42));
	foo(std::string{});
	foo('a');
	foo(std::vector<int>{1,2,3,4});
	//foo(std::cout);

}
