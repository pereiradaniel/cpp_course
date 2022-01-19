// External Linkage
// Module_a.cpp

// In the following program the name share_me refers to the same entity across two translation units.  The variable share_me is accessed in Module_a.cpp and defined in Module_b.cpp.

#include <iostream>
extern int share_me; // external linkage declaration
void display() {
    std::cout << "share_me at " << &share_me << '\n'; 
    std::cout << "share_me is " << share_me++ << '\n';
}
