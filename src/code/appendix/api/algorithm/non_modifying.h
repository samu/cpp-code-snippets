// all_of                 Test condition on all elements in range
bool all_of (InputIterator first, InputIterator last, UnaryPredicate pred);

// any_of                 Test if any element in range fulfills condition
bool any_of (InputIterator first, InputIterator last, UnaryPredicate pred);

// none_of                Test if no elements fulfill condition
bool none_of (InputIterator first, InputIterator last, UnaryPredicate pred);

// for_each               Apply function to range
Function for_each (InputIterator first, InputIterator last, Function fn);

// find                   Find value in range
InputIterator find (InputIterator first, InputIterator last, const T& val);

// find_if                Find element in range
InputIterator find_if (InputIterator first, InputIterator last, UnaryPredicate pred);

// find_if_not            Find element in range (negative condition)
InputIterator find_if_not (InputIterator first, InputIterator last, UnaryPredicate pred);

// find_end               Find last subsequence in range
ForwardIterator1 find_end (ForwardIterator1 first1, ForwardIterator1 last1,
                           ForwardIterator2 first2, ForwardIterator2 last2);
ForwardIterator1 find_end (ForwardIterator1 first1, ForwardIterator1 last1,
                           ForwardIterator2 first2, ForwardIterator2 last2,
                           BinaryPredicate pred);

// find_first_of          Find element from set in range
ForwardIterator1 find_first_of (InputIterator first1, InputIterator last1,
                                ForwardIterator first2, ForwardIterator last2);
ForwardIterator1 find_first_of (InputIterator first1, InputIterator last1,
                                ForwardIterator first2, ForwardIterator last2,
                                BinaryPredicate pred);

// adjacent_find          Find equal adjacent elements in range
ForwardIterator adjacent_find (ForwardIterator first, ForwardIterator last);
ForwardIterator adjacent_find (ForwardIterator first, ForwardIterator last,
                               BinaryPredicate pred);

// count                  Count appearances of value in range
Number count (InputIterator first, InputIterator last, const T& val);

// count_if               Return number of elements in range satisfying condition
Number count_if (InputIterator first, InputIterator last, UnaryPredicate pred);

// mismatch               Return first position where two ranges differ
pair<InputIterator1, InputIterator2> mismatch (InputIterator1 first1, InputIterator1 last1,
                                               InputIterator2 first2);
pair<InputIterator1, InputIterator2> mismatch (InputIterator1 first1, InputIterator1 last1,
                                               InputIterator2 first2, BinaryPredicate pred);

// equal                  Test whether the elements in two ranges are equal
bool equal (InputIterator1 first1, InputIterator1 last1,
            InputIterator2 first2);
bool equal (InputIterator1 first1, InputIterator1 last1,
            InputIterator2 first2, BinaryPredicate pred);

// is_permutation         Test whether range is permutation of another
bool is_permutation (ForwardIterator1 first1, ForwardIterator1 last1,
                     ForwardIterator2 first2);
bool is_permutation (ForwardIterator1 first1, ForwardIterator1 last1,
                     ForwardIterator2 first2, BinaryPredicate pred);

// search                 Search range for subsequence
ForwardIterator1 search (ForwardIterator1 first1, ForwardIterator1 last1,
                         ForwardIterator2 first2, ForwardIterator2 last2);
ForwardIterator1 search (ForwardIterator1 first1, ForwardIterator1 last1,
                         ForwardIterator2 first2, ForwardIterator2 last2,
                         BinaryPredicate pred);

// search_n               Search range for a sequence of elements
ForwardIterator search_n (ForwardIterator first, ForwardIterator last,
                          Size count, const T& val);
ForwardIterator search_n (ForwardIterator first, ForwardIterator last,
                          Size count, const T& val, BinaryPredicate pred);
