#include <iostream>

// T is a type template parameter.
// The compiler replaces T with the type specified in the instantiation

template <typename T> // template header 
void foo() {
    T value;
    value = 1.5;
    std::cout << value << '\n';
}

template <typename T> // template header
void zoo() {
    T val;
    val = 4.8;
    std::cout << val << "\n";
}

int main() {
    foo<int>();    // template instantiation 
    foo<double>(); // template instantiation
    zoo<int>();
    zoo<double>();
}
