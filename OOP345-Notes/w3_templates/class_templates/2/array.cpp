// Class Template
// array.cpp

// The compiler generates class definitions for each template instantiation and replaces type T with the argument specified in the instantiation of the Array template.  The following application generates a class named Array that holds elements of type long:

#include <iostream>
#include "array.h"

int main() {
    Array<long> a, b;

    for (int i = 0; i < 5; i++)
        a[i] = i * i;
    b = a;
    for (int i = 0; i < 5; i++)
        std::cout << b[i] << ' ';
    std::cout << std::endl;
}