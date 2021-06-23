// Results at Integer Limits
// If the operand is of unsigned type and its value is 0u, the decrement operator changes the lvalue to the largest storable value.  If the operand is of unsigned type and its value is the largest storable value, the increment operator changes the lvalue to 0u. 

// Post-Fix Operators on Unsigned Values
// unsigned.cpp

#include <iostream>
int main() {
    unsigned i = 0u;
    i--;
    std::cout << i++ << std::endl;
    std::cout << i << std::endl;
}

// If the operand is of signed integral type, floating-point type, or pointer type, and the increment/decrement operation produces an overflow/underflow, the result is undefined. 