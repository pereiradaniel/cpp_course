// Indirection
// The indirection operator (*) returns the value stored in the address that the operand contains.  The expression is itself an lvalue. 
// The indirection and address-of operators are inverses of one another.  The result of *&x is x. 

// Indirection
// indirection.cpp
#include <iostream>
#include <iomanip>
int main() {
    int x = 3;
    int* p = &x;
    std::cout << x << std::setw(11) << p << std::endl; 
    *&x = 4;
    std::cout << x << std::setw(11) << p << std::endl; 
}
