// Type Inference

// A compiler can infer the type of an object from a previously declared object.  For instance, it can infer the type from the right operand of an initializer expression.  In C++, the keyword auto specifies type inference. 

// In the following program, the compiler infers the type of i from the type of the initial value (6 and 0):

#include <iostream>
int main () {
    int a[] {1, 2, 3, 4, 5, 6};
    const auto n = 6;   // Infers int from value of 6
    for (auto i = 0; i < n; i++)    // Infers int from value of 0
        std::cout << a[i] << ' ';
    std::cout << std::endl;
}