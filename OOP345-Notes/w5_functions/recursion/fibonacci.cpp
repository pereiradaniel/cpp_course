// Recursive Functions
// fibonacci.cpp

#include <iostream>

unsigned factorial(unsigned x) {
    return (x > 2u) ? x * factorial(x - 1) : x;
    // recursion stops once x drops to a value less
    // than or equal to 2u.
    // takes up a lot of stack space
}

int main () {
    std::cout << "2! = " << factorial(2) << std::endl;
    std::cout << "3! = " << factorial(3) << std::endl;
    std::cout << "4! = " << factorial(4) << std::endl; 
}