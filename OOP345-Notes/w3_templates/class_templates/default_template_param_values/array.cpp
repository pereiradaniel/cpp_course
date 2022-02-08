// Default Template Parameter Values
// array.cpp

// If all of the template parameters have default values, we can create a class without supplying any arguments:

#include <iostream>
#include "array.h"

int main() {
    Array <> a, b;

    for (int i = 0; i < 5; i++)
        a[i] = i * i;
    b = a;
    for (int i = 0; i < 5; i++)
        std::cout << b[i] << ' ';
    std::cout << endl;
}