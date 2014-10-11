#include <list>

// Capacity:
// empty                     Test whether container is empty
// size                      Return size
// max_size                  Return maximum size

// Element access:
// front                     Access first element by reference
// back                      Access last element by reference

// Modifiers:
// assign                    Assign new content to container
//                           range, fill or initializer list
// emplace_front             Construct and insert element at beginning
// push_front                Insert element at beginning
// pop_front                 Delete first element (returns nothing)
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
// resize                    Change size to n elements (deletes overflow elements at the end)
// clear                     Clear content (size will be 0)

// Operations:
// splice                    Transfer elements from list to list
// remove                    Remove elements with specific value
// remove_if                 Remove elements fulfilling condition
// unique                    Remove duplicate consecutive values
// merge                     Merge sorted lists
// sort                      Sort elements in container
// reverse                   Reverse the order of elements