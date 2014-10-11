// lexicographical_compare   Lexicographical less-than comparison
bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,
                              InputIterator2 first2, InputIterator2 last2);
bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,
                              InputIterator2 first2, InputIterator2 last2,
                              Compare comp);

// next_permutation          Transform range to next lexicographically greater
//                           permutation. Returns true if the function could rearrange
//                           the object as a lexicographicaly greater permutation.
//                           Otherwise, the function returns false to indicate that
//                           the arrangement is not greater than the previous, but
//                           the lowest possible (sorted in ascending order).
bool next_permutation (BidirectionalIterator first,
                       BidirectionalIterator last);
bool next_permutation (BidirectionalIterator first,
                       BidirectionalIterator last, Compare comp);

// prev_permutation          Transform range to next lexicographically smaller
//                           permutation.
bool prev_permutation (BidirectionalIterator first,
                       BidirectionalIterator last );
bool prev_permutation (BidirectionalIterator first,
                       BidirectionalIterator last, Compare comp);