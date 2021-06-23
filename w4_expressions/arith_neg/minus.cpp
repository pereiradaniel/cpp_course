// Results for Unsigned Types
// The negation operator (-) applied to an operand of unsigned type deserves special attention.  The result of the expression is of unsigned type and equal to 2n-operand where n is the number of bits used to store the operand: 

// Arithmetic Negation
// minus.cpp
#include <iostream>
#include <iomanip>
int main() {
    unsigned a = 2u;
    unsigned c = 1u;
    unsigned e = 0u;
std::cout << a << std::setw(11) << -a << std::endl; 
    std::cout << c << std::setw(11) << -c << std::endl;
    std::cout << e << std::setw(11) << -e << std::endl;
}
