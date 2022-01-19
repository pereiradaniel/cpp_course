// Compiler-Evaluated Expressions
// constexpr.cpp

// In this example, the factorial calculation expressed in the form of a recursive function (a function that calls itself) does not depend on the rest of the program and is identified as a constant expression.  An constant expression can only refer to variables that are also constant expressions:

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