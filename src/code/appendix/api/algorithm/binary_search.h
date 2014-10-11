// these algorithms support operation on SORTED ranges

// lower_bound            Return iterator to lower bound
//                        10 10 10 20 20 20 30 30
//                                 ^
ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last,
                             const T& val);
ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last,
                             const T& val, Compare comp);

// upper_bound            Return iterator to upper bound
//                        10 10 10 20 20 20 30 30
//                                          ^
ForwardIterator upper_bound (ForwardIterator first, ForwardIterator last,
                             const T& val);
ForwardIterator upper_bound (ForwardIterator first, ForwardIterator last,
                             const T& val, Compare comp);

// equal_range            Get subrange of equal elements
pair<ForwardIterator,ForwardIterator> equal_range (ForwardIterator first,
                                                   ForwardIterator last,
                                                   const T& val);
pair<ForwardIterator,ForwardIterator> equal_range (ForwardIterator first,
                                                   ForwardIterator last,
                                                   const T& val, Compare c);

// binary_search          Test if value exists in sorted sequence
bool binary_search (ForwardIterator first, ForwardIterator last, const T& val);
bool binary_search (ForwardIterator first, ForwardIterator last, const T& val, Compare comp);