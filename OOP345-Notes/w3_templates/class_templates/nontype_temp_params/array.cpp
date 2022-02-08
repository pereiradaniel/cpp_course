// Non-Type Template Parameters
// array.cpp

#include <iostream>
#include "array.h"

int main() {
    // The argument corresponding to the non-type parameter must be a constant or a constant expression:
    Array <int, 50> a, b;

    for (int i = 0; i < 5; i++)
        a[i] = i * i;
    b = a;
    for (int i = 0; i < 5; i++)
        std::cout << b[i] << ' ';
    std::cout << std::endl;
}