// sort                   Sort elements in range
void sort (RandomAccessIterator first, RandomAccessIterator last);
void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);

// stable_sort            Sort elements preserving order of equivalents
void stable_sort (RandomAccessIterator first, RandomAccessIterator last);
void stable_sort (RandomAccessIterator first, RandomAccessIterator last,
                  Compare comp);

// partial_sort           Partially sort elements in range.
//                        Rearranges the elements in the range [first,last), in such
//                        a way that the elements before middle are the smallest elements
//                        in the entire range and are sorted in ascending order, while
//                        the remaining elements are left without any specific order.
void partial_sort (RandomAccessIterator first, RandomAccessIterator middle,
                   RandomAccessIterator last);
void partial_sort (RandomAccessIterator first, RandomAccessIterator middle,
                   RandomAccessIterator last, Compare comp);

// partial_sort_copy      Copy and partially sort range
RandomAccessIterator partial_sort_copy (InputIterator first,InputIterator last,
                                        RandomAccessIterator result_first,
                                        RandomAccessIterator result_last);
RandomAccessIterator partial_sort_copy (InputIterator first,InputIterator last,
                                        RandomAccessIterator result_first,
                                        RandomAccessIterator result_last, Compare comp);

// is_sorted              Check whether range is sorted
bool is_sorted (ForwardIterator first, ForwardIterator last);
bool is_sorted (ForwardIterator first, ForwardIterator last, Compare comp);

// is_sorted_until        Find first unsorted element in range
ForwardIterator is_sorted_until (ForwardIterator first, ForwardIterator last);
ForwardIterator is_sorted_until (ForwardIterator first, ForwardIterator last,
                                 Compare comp);

// nth_element            Rearranges the elements in the range [first,last) in such
//                        a way that the element at the nth position is the element
//                        that would be in that position in a sorted sequence.
void nth_element (RandomAccessIterator first, RandomAccessIterator nth,
                  RandomAccessIterator last);
void nth_element (RandomAccessIterator first, RandomAccessIterator nth,
                  RandomAccessIterator last, Compare comp);