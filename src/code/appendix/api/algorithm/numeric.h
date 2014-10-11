// these algorithms are for numeric values only

// accumulate                       Accumulate values in range
T accumulate (InputIterator first, InputIterator last, T init);
T accumulate (InputIterator first, InputIterator last, T init,
              Function f);

// adjacent_difference              Compute adjacent difference of range
OutputIterator adjacent_difference (InputIterator first, InputIterator last,
                                    OutputIterator result);
OutputIterator adjacent_difference (InputIterator first, InputIterator last,
                                    OutputIterator result, BinaryOperation binary_op);

// inner_product                    Compute cumulative inner product of range
T inner_product (InputIterator1 first1, InputIterator1 last1,
                 InputIterator2 first2, T init);
T inner_product (InputIterator1 first1, InputIterator1 last1,
                 InputIterator2 first2, T init,
                 BinaryOperation1 binary_op1,
                 BinaryOperation2 binary_op2);

// partial_sum                      Compute partial sums of range
OutputIterator partial_sum (InputIterator first, InputIterator last,
                            OutputIterator result);
OutputIterator partial_sum (InputIterator first, InputIterator last,
                            OutputIterator result, BinaryOperation binary_op);

// iota                             Store increasing sequence
void iota (ForwardIterator first, ForwardIterator last, T val);