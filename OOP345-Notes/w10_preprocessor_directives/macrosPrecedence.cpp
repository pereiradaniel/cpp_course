// Macros Avoiding Precedence Errors
// macrosPrecedence.cpp

#include <iostream>
#define PI 3.14
#define SQUARE(X)  ((X) * (X)) /* NOTE THE PARENTHESES */ 

int main() {
    std::cout << "PI(2.35 + 1)^2 is " << PI * SQUARE(2.35 + 1) << std::endl; 
}