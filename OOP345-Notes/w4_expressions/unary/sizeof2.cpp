// sizeof() takes a type, while sizeof takes a variable, object, or expression.  With some compilers, the syntax is interchangeable. 

// The compiler evaluates sizeof expressions at compile time.  If its operand is an expression, the compiler does not evaluate that expression:

// sizeof Operator
// sizeof2.cpp
#include <iostream>
int main() {
    int j = 1;
std::cout << sizeof j++ << std::endl;
    std::cout << j << std::endl; // j is still 1 
}
