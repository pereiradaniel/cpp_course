// Lambda Expressions
// capture_by_reference.cpp

#include <iostream>

template<typename Func>
int add(int i, Func func) { return func(i); }

template<typename Func>
int sub(int i, Func func) { return func(i); }

int main() {
    int k = 4;
    // lambdas capture non-local var k by reference, enabling
    // a change to its value from within each expression
    std::cout << add(10, [&](int i){ return i + k++; }) << std::endl; 
    std::cout << "k = " << k << std::endl; 
    std::cout << sub(10, [&](int i){ return i - k++; }) << std::endl;
    std::cout << "k = " << k << std::endl; 
}