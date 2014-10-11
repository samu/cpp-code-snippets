#ifndef SORTED_VECTOR_H
#define SORTED_VECTOR_H

#include <vector>
#include <algorithm>
#include <functional>

template<typename T>
class SortedVector {

  using container = std::vector<T>;
  container v;

public:

  using size_type = typename container::size_type;
  using iterator = typename container::const_iterator;
  using reverse_iterator = typename container::const_reverse_iterator;

  bool empty() const {
    return v.empty();
  }

  size_type size() const {
    return v.size();
  }

  void insert(T const & val) {
    typename container::iterator it = std::find_if(v.begin(), v.end(), [val](T item) {
      return val < item;
    });

    if(it == v.end()) {
      v.push_back(val);
    } else {
      v.insert(it, val);
    }
  }

  T const & operator[](int n) const {
    return v.at(n);
  }

  iterator erase(T const & val) {
    typename container::iterator it1 = std::remove_if(v.begin(), v.end(), [val](T & item) {
      return val == item;
    });

    v.erase(it1, v.end());
    return std::find_if(v.begin(), v.end(), [val](T & item) {
      return val < item;
    });
  }

  iterator begin() const {
    return v.cbegin();
  }

  iterator end() const {
    return v.cend();
  }

  reverse_iterator rbegin() const {
    return v.crbegin();
  }

  reverse_iterator rend() const {
    return v.crend();
  }

};

#endif
