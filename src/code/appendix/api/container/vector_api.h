#include <vector>

// Capacity:
// empty                     Test whether container is empty
// size                      Return size
// max_size                  Return maximum size
// resize                    Change size
// capacity                  Return size of allocated storage capacity
// reserve                   Request a change in capacity
// shrink_to_fit             Shrink to fit

// Element access:
// front                     Access first element by reference
// back                      Access last element by reference
// operator[]                Access element
// at                        Access element
// data                      Access data

// Modifiers:
// assign                    Assign new content to container
//                           range, fill or initializer list
// emplace_back              Construct and insert element at the end
// push_back                 Add element at the end
// pop_back                  Delete last element (returns nothing)
// emplace                   Construct and insert element
//                           (IteratorToPosition, Args...)
// insert                    Insert elements
//                           (Iterator, single_element, fill, range, move, initializerlist)
// erase                     Erase elements (effectively reduces container size)
//                           (IteratorToPosition) or (Begin, End)
// swap                      Swap content (list& x)
// clear                     Clear content (size will be 0)
