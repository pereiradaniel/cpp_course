// Internal Linkage
// Module_a.cpp

// The following program allocates separate memories for the variables named local in Module_a.cpp and Module_b.cpp.  The same name (local) refers to two distinct variables in the two translation units.

#include <iostream>
static int local = 4;
void display() {
    std::cout << "local is at " << &local << '\n'; 
    std::cout << "local is " << local++ << '\n';
}