// The following program creates references to 3 longs, resets the referenced values, and displays the value of each reference:

// Functional - reference wrapper
// reference_wrapper.cpp
#include <iostream>
#include <functional>

int main() {
    long v1 = 1L, v2 = 2L, v3 = 3L;
 
    std::reference_wrapper<long> r1 = v1;
    std::reference_wrapper<long> r2 = v2;
    std::reference_wrapper<long> r3 = v3;
 
    v1 = 10L, v2 = 20L, v3 = 30L;
 
    std::cout << "r1 = " << r1 << std::endl; 
    std::cout << "r2 = " << r2 << std::endl;
    std::cout << "r3 = " << r3 << std::endl;
}

// std::bind stores the arguments passed in by copying their values. 
// Ref

// The function template std::ref() returns an std::reference_wrapper instance for the argument supplied.