// Template Specialization
// maximum.h
#include <iostream>
#include <cstring>
template <class T>
T maximum(T a, T b) {
    std::cout << "in template body\n";
    return a > b ? a : b;
}

// specialization for char* types
template <> // denotes specialization
const char* maximum<const char*>(const char* a, const char* b) {
    std::cout << "in specialization\n";
    return std::strcmp(a, b) > 0 ? a : b; 
}