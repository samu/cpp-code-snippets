// is_partitioned         Test whether range is partitioned
bool is_partitioned (InputIterator first, InputIterator last, UnaryPredicate pred);

// partition              Partition range in two and return an iterator that points
//                        to the first element of the second group of elements.
ForwardIterator partition (ForwardIterator first,
                           ForwardIterator last, UnaryPredicate pred);

// stable_partition       Partition range in two - stable ordering
BidirectionalIterator stable_partition (BidirectionalIterator first,
                                        BidirectionalIterator last,
                                        UnaryPredicate pred);

// partition_copy         Partition range into two
pair<OutputIterator1, OutputIterator2> partition_copy (
                InputIterator first, InputIterator last,
                OutputIterator1 result_true, OutputIterator2 result_false,
                UnaryPredicate pred);

// partition_point        Get partition point
ForwardIterator partition_point (ForwardIterator first, ForwardIterator last,
                                 UnaryPredicate pred);