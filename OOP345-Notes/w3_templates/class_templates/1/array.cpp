// Array
// array.cpp

// A template declaration for a family of classes follows the same rules as a template declaration for a family of functions.

// Consider a class that contains an array of up to 50 ints:

#include <iostream>
#include "array.h"

int main() {
    Array a, b;

    for (int i = 0; i < 5; i++)
        a[i] = i * i;
    b = a;
    for (int i = 0; i < 5; i++)
        std::cout << b[i] << ' ';
    std::cout << std::endl;
}