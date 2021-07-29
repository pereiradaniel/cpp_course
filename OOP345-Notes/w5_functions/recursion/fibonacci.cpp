// Recursive Functions
// fibonacci.cpp

/* A recursive function is a function that calls itself from within its own body.  Recursive functions require an exit condition that defines when the recursion terminates.  Once it terminates control begins stepping back through the function call stack to the initial caller.  The exit condition prevents stack overflow caused by an ever increasing set of recursive calls. 

The following program uses a recursive function to calculate factorials: */

#include <iostream>

unsigned factorial(unsigned x) {
    return (x > 2u) ? x * factorial(x - 1) : x;
}

int main () {
    std::cout << "2! = " << factorial(2) << std::endl;
    std::cout << "3! = " << factorial(3) << std::endl;
    std::cout << "4! = " << factorial(4) << std::endl; 
}