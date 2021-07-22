// Postfix Increment and Decrement
// The postfix increment and decrement operators change an lvalue by one unit after accessing the value.  The operand is of integral, floating-point, or pointer type and followed by the increment (++) or decrement (--) operator.  The operand must be a modifiable lvalue and the expression itself is a prvalue. 

// Post-Fix Operators
// postfix.cpp

#include <iostream>
int main() {
    int i = 10;
std::cout << i++ << std::endl;
    (i++)++;           // ERROR (i++) is a prvalue, not an lvalue 
    std::cout << i << std::endl;
}