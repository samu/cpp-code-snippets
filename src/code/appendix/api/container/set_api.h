// Capacity:
// empty                     Test whether container is empty
// size                      Return size
// max_size                  Return maximum size

// Element access:
// operator[]                Access element
// at                        Access element

// Modifiers:
// emplace                   Construct and insert element
//                           (IteratorToPosition, Args...)
// insert                    Insert elements
//                           (Iterator, single_element, fill, range, move, initializerlist)
// erase                     Erase elements (effectively reduces container size)
//                           (IteratorToPosition) or (Begin, End)
// swap                      Swap content (list& x)
// clear                     Clear content (size will be 0)

// Operations:
// find                      Get iterator to element by passing a value
// count                     Count elements with a specific key by passing a value
// lower_bound               Return iterator to lower bound by passing a value
// upper_bound               Return iterator to upper bound by passing a value
// equal_range               Get range of equal elements by passing a value