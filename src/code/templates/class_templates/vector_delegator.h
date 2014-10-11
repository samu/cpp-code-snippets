#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>

template<typename T>
struct VectorDelegator {

  template<typename ITER>
  VectorDelegator(ITER a, ITER b) : data(a, b) {}

private:

  std::vector<int> data{};

};

void vector_delegator() {
  std::vector<int> v{1,2,3};

  VectorDelegator<int> vd{v.begin(), v.end()};
}