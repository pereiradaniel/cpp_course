// Compiler-Evaluated Expressions
// constexpr.cpp
#include <iostream>
constexpr int N = 8; // constant variable
constexpr int factorial(int i) { // constant function
    return i > 1 ? i * factorial(i-1) : 1;
}

int main() {
    int n {N};
    std::cout << n << "! = " << factorial(n) << std::endl;
    system("pause");
    return 0;
}

// Both the variable N and the function factorial are evaluated at compile-time and the result is stored as a constant value in the output stream expression.