// throw Operator
// The throw operator (throw) identifies an exception to normal execution.  The operator creates a temporary object from its operand and transfers control to the exception handler.  The exception object is an lvalue of the type of the operand of the throw expression.  This operand is analogous to an argument passed to a function and received in its parameter.  For example,

// Throw Operator
// throw.cpp
#include <iostream>
int divide(int x, int y) {
    if (y == 0)
        throw "divide by zero inadmissible";
    else
        return x / y;
}
int main () {
    int dividend, divisor, quotient = 0;
    std::cout << "Enter dividend : ";
    std::cin >> dividend;
    std::cout << "Enter divisor  : ";
    std::cin >> divisor;

    //... execute function successfully or throw exception 
    quotient = divide(dividend, divisor);

    // ... handle exception
    std::cout << "Quotient = " << quotient << std::endl;
}
