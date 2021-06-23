// The Unsigned Trap
// If one of the operands is of unsigned integral type and the other is of a signed integral type, the compiler promotes the value of the signed type to a value of unsigned type.  This particular promotion may produce a counter-intuitive result.  For example,

// Relational Expressions
// relational.cpp
#include <iostream>
int main() {
    unsigned len = 0u;
std::cout << (len > -1) << std::endl; // might expect true
                                        // evaluates to false 
}
