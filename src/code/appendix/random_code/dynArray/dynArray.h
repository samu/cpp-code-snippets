#ifndef DYNARRAY_H_
#define DYNARRAY_H_

#include <vector>

template<typename T>
struct dynArray {

  using DynArrayType = std::vector<T>;
  using size_type = typename DynArrayType::size_type;
  using value_type = typename DynArrayType::value_type;
  using iterator = typename DynArrayType::iterator;
  using const_iterator = typename DynArrayType::const_iterator;
  using allocator_type = typename DynArrayType::allocator_type;

  // Constructors

  explicit dynArray(const allocator_type& alloc = allocator_type()):container{alloc} {}
  explicit dynArray(size_type n):container{n} {}
  explicit dynArray(size_type n, value_type const& val, allocator_type const& alloc = allocator_type()):container{n, val, alloc} {}

  template<class InputIterator>
  dynArray(InputIterator first, InputIterator last, allocator_type const& alloc = allocator_type()):container{first, last, alloc} {}

  dynArray(dynArray const& x):container{x.container} {}
  dynArray(dynArray const& x, allocator_type const& alloc):container{x.container, alloc} {}
  dynArray(std::initializer_list<value_type> il, allocator_type const& alloc = allocator_type()):container{il, alloc} {}

  // Iterators

  iterator begin() {
    return container.begin();
  }

  const_iterator begin() const {
    return container.begin();
  }

  iterator end() {
    return container.end();
  }

  const_iterator end() const {
    return container.end();
  }

  iterator rbegin() {
    return container.rbegin();
  }

  const_iterator rbegin() const {
    return container.rbegin();
  }

  iterator rend() {
    return container.rend();
  }

  const_iterator rend() const {
    return container.rend();
  }

  const_iterator cbegin() const {
    return container.cbegin();
  }

  const_iterator cend() const {
    return container.cend();
  }

  const_iterator crbegin() const {
    return container.crbegin();
  }

  const_iterator crend() const {
    return container.crend();
  }

  // Capacity

  size_type size() const {
    return container.size();
  }

  void resize(size_type n) {
    container.resize(n);
  }

  void resize(size_type n, const value_type& val) {
    container.resize(n, val);
  }

  size_type capacity() const {
    return container.capacity();
  }

  bool empty() const {
    return container.empty();
  }

  // Element access

  value_type& operator[](int n) {
    return container[normalize_index(n)];
  }

  value_type const& operator[](int n) const {
    return container[normalize_index(n)];
  }

  value_type& at(int n) {
    return container.at(normalize_index(n));
  }

  value_type const& at(int n) const {
    return container.at(normalize_index(n));
  }

  value_type& front() {
    return container.front();
  }

  value_type const& front() const {
    return container.front();
  }

  value_type& back() {
    return container.back();
  }

  value_type const& back() const {
    return container.back();
  }

  // Modifiers

  void push_back(value_type const& val) {
    container.push_back(val);
  }

  void push_back(value_type&& val) {
    container.push_back(val);
  }

  void pop_back() {
    container.pop_back();
  }

  iterator erase(iterator position) {
    return container.erase(position);
  }

  iterator erase(iterator first, iterator last) {
    return container.erase(first, last);
  }

  void clear() {
    container.clear();
  }

  // Allocator

  allocator_type get_allocator() const {
    return container.get_allocator();
  }

private:

  DynArrayType container;

  int normalize_index(int n) const {
    return (n < 0) ? size()+n : n;
  }

};

// Factories

template <typename T>
dynArray<T> makeDynArray(std::initializer_list<T> list) {
  return dynArray<T>{list};
}

#endif /* DYNARRAY_H_ */
