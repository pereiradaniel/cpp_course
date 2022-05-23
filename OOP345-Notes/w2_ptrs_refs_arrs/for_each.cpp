// Range-Based for
// for_each.cpp

// A range-based for is an iteration construct specifically designed for use with collections.  The collections can be of any form.  This construct steps sequentially through the elements of an array without requiring its size:

#include <iostream>
int main () {
    int a[]{1, 2, 3, 4, 5, 6};

    for (int& e : a)
        std::cout << e << ' ';
    std::cout << std::endl;
}
