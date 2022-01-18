// Alignment of a Type
// alignment.cpp

// The alignof() operator returns the alignment requirement of its argument type.

#include <iostream>
int main() {
    std::cout << alignof(int)<<std::endl;       // 4
    std::cout << alignof(double)<<std::endl;    // 8
}