// Recursive Functions
// iteration.cpp

// alternative to recursive is an iteration construct

#include <iostream>

unsigned factorial(unsigned x) {
    unsigned result = 1u;
    while (x > 1u)
        result = result * x--;
    return result;
}

int main () {
    std::cout << "2! = " << factorial(2) << std::endl;
    std::cout << "3! = " << factorial(3) << std::endl;
    std::cout << "4! = " << factorial(4) << std::endl; 
}