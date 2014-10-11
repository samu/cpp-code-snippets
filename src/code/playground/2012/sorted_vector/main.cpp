#include "sorted_vector.h"

#include "cute.h"
#include "ostream_listener.h"
#include "cute_runner.h"

#include <stdexcept>

void create_an_empty_sorted_vector() {
  SortedVector<int> v;
  ASSERT(v.empty());
  ASSERT_EQUAL(0, v.size());
  ASSERT_THROWS(v[0], std::out_of_range);
}

void insert_one_into_sorted_vector() {
  SortedVector<int> v;
  v.insert(1);
  ASSERT(not v.empty());
  ASSERT_EQUAL(1, v.size());
  ASSERT_EQUAL(1, v[0]);
}

void insert_three_values_into_sorted_vector() {
  SortedVector<char> v;
  v.insert('b');
  v.insert('a');
  v.insert('b');
  ASSERT_EQUAL(3, v.size());
  ASSERT_EQUAL('a', v[0]);
  ASSERT_EQUAL('b', v[1]);
  ASSERT_EQUAL('b', v[2]);
}

const int to_be_erased = 2;

SortedVector<int> make_sorted_vector() {
  SortedVector<int> v;
  v.insert(to_be_erased);
  v.insert(1);
  v.insert(3);
  return v;
}

void erase_single_element_from_sorted_vector() {
  SortedVector<int> v = make_sorted_vector();
  ASSERT_EQUAL(3, v.size());
  SortedVector<int>::iterator it = v.erase(to_be_erased);
  ASSERT_EQUAL(3, *it);
  ASSERT_EQUAL(2, v.size());
  ASSERT_EQUAL(v.end(), std::find(v.begin(), v.end(), to_be_erased));
}

void erase_multiple_elements_form_sorted_vector() {
  SortedVector<int> v = make_sorted_vector();
  v.insert(to_be_erased);
  v.insert(to_be_erased);
  ASSERT_EQUAL(5, v.size());
  SortedVector<int>::iterator it = v.erase(to_be_erased);
  ASSERT_EQUAL(3, *it);
  ASSERT_EQUAL(2, v.size());
  ASSERT_EQUAL(v.end(), std::find(v.begin(), v.end(), to_be_erased));
}

void runSuite(){
  cute::suite s;

  s.push_back(CUTE(create_an_empty_sorted_vector));
  s.push_back(CUTE(insert_one_into_sorted_vector));
  s.push_back(CUTE(insert_three_values_into_sorted_vector));
  s.push_back(CUTE(erase_single_element_from_sorted_vector));
  s.push_back(CUTE(erase_multiple_elements_form_sorted_vector));

  cute::ostream_listener lis;
  cute::makeRunner(lis)(s, "tests");
}

int main(){
  runSuite();
  return 0;
}
