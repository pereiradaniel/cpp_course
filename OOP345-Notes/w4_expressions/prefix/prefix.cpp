// Prefix Increment and Decrement
// The prefix increment (++) and decrement (--) operators change an lvalue by one unit before accessing the value. The result of the operation is an lvalue, unlike their post-fix counterparts. The operand may be of any integral type, floating-point type, or pointer type, but must be a modifiable lvalue.  For example,

// Pre-Fix Operators
// prefix.cpp
#include <iostream>
int main() {
    int i = 10;
std::cout << ++i << std::endl;
    ++(++i);           // OK (++i) is an lvalue 
    std::cout << i << std::endl;
}
