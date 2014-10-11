// copy                   Copy range of elements
OutputIterator copy (InputIterator first, InputIterator last, OutputIterator result);

// copy_n                 Copy elements
OutputIterator copy_n (InputIterator first, Size n, OutputIterator result);

// copy_if                Copy certain elements of range
OutputIterator copy_if (InputIterator first, InputIterator last,
                        OutputIterator result, UnaryPredicate pred);

// copy_backward          Copy range of elements backward
BidirectionalIterator2 copy_backward (BidirectionalIterator1 first,
                                      BidirectionalIterator1 last,
                                      BidirectionalIterator2 result);

// move                   Move range of elements
OutputIterator move (InputIterator first, InputIterator last, OutputIterator result);

// move_backward          Move range of elements backward
BidirectionalIterator2 move_backward (BidirectionalIterator1 first,
                                      BidirectionalIterator1 last,
                                      BidirectionalIterator2 result);

// swap                   Exchange values of two objects
noexcept (is_nothrow_move_constructible<T>::value && is_nothrow_move_assignable<T>::value);
noexcept (noexcept(swap(*a,*b)));

// swap_ranges            Exchange values of two ranges
ForwardIterator2 swap_ranges (ForwardIterator1 first1, ForwardIterator1 last1,
                              ForwardIterator2 first2);

// iter_swap              Exchange values of objects pointed by two iterators
void iter_swap (ForwardIterator1 a, ForwardIterator2 b);

// transform              Transform range
OutputIterator transform (InputIterator first1, InputIterator last1,
                          OutputIterator result, UnaryOperation op);
OutputIterator transform (InputIterator1 first1, InputIterator1 last1,
                          InputIterator2 first2, OutputIterator result,
                          BinaryOperation binary_op);

// replace                Replace all values in range with another one
void replace (ForwardIterator first, ForwardIterator last,
              const T& old_value, const T& new_value);

// replace_if             Replace all values in range with another one
void replace_if (ForwardIterator first, ForwardIterator last,
                 UnaryPredicate pred, const T& new_value);

// replace_copy           Copy range replacing value
OutputIterator replace_copy (InputIterator first, InputIterator last,
                             OutputIterator result,
                             const T& old_value, const T& new_value);

// replace_copy_if        Copy range replacing value
OutputIterator replace_copy_if (InputIterator first, InputIterator last,
                                OutputIterator result, UnaryPredicate pred,
                                const T& new_value);

// fill                   Fill range with value
void fill (ForwardIterator first, ForwardIterator last, const T& val);

// fill_n                 Fill sequence with value
OutputIterator fill_n (OutputIterator first, Size n, const T& val);

// generate               Generate values for range with function
void generate (ForwardIterator first, ForwardIterator last, Function f);

// generate_n             Generate values for sequence with function
OutputIterator generate_n (OutputIterator first, Size n, Function f);

// remove                 Remove all values from range and return iterator to the new end
ForwardIterator remove (ForwardIterator first, ForwardIterator last, const T& val);

// remove_if              Remove all values from range and return iterator to the new end
ForwardIterator remove_if (ForwardIterator first, ForwardIterator last,
                           UnaryPredicate pred);

// remove_copy            Copy range removing all values
OutputIterator remove_copy (InputIterator first, InputIterator last,
                            OutputIterator result, const T& val);

// remove_copy_if         Copy range removing all values
OutputIterator remove_copy_if (InputIterator first, InputIterator last,
                               OutputIterator result, UnaryPredicate pred);

// unique                 Remove consecutive duplicates in range and return iterator to new end
ForwardIterator unique (ForwardIterator first, ForwardIterator last);
ForwardIterator unique (ForwardIterator first, ForwardIterator last,
                        BinaryPredicate pred);

// unique_copy            Copy range removing consecutive duplicates
OutputIterator unique_copy (InputIterator first, InputIterator last,
                            OutputIterator result);
OutputIterator unique_copy (InputIterator first, InputIterator last,
                            OutputIterator result, BinaryPredicate pred);

// reverse                Reverse range
void reverse (BidirectionalIterator first, BidirectionalIterator last);

// reverse_copy           Copy range reversed and return an iterator pointing to the
//                        end of the copied range
OutputIterator reverse_copy (BidirectionalIterator first,
                             BidirectionalIterator last, OutputIterator result);

// rotate                 Rotate left the elements in range in such a way that the
//                        element pointed by middle becomes the new first element.
//                        Return an iterator pointing to the element that now contains
//                        the value previously pointed by first.
ForwardIterator rotate (ForwardIterator first, ForwardIterator middle,
                        ForwardIterator last);

// rotate_copy            Copy range rotated left. Return an output iterator pointing
//                        to the end of the copied range.
OutputIterator rotate_copy (ForwardIterator first, ForwardIterator middle,
                            ForwardIterator last, OutputIterator result);

// random_shuffle         Randomly rearrange elements in range
void random_shuffle (RandomAccessIterator first, RandomAccessIterator last);
void random_shuffle (RandomAccessIterator first, RandomAccessIterator last,
                     RandomNumberGenerator&& gen);

// shuffle                Randomly rearrange elements in range using generator
void shuffle (RandomAccessIterator first, RandomAccessIterator last, URNG&& g);

