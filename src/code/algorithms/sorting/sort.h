#include <iostream>
#include <algorithm>
#include <vector>

struct Dog {

  int age = 0;

  Dog(int age) : age{age} {}

  // Brutal wichtig: Parameter const Dog& dog muss const sein, sonst knallts!
  bool operator < (const Dog& dog) const {
    return (age < dog.age);
  }

};

using DogList = std::vector<Dog>;

void sort() {

  Dog dog1{2};
  Dog dog2{1};

  DogList dogList{};
  dogList.push_back(dog1);
  dogList.push_back(dog2);

  std::sort(dogList.begin(), dogList.end());

  for (Dog dog : dogList) {
    std::cout << dog.age << " ";
  }
}
