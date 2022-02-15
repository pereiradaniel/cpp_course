// Function Template
// swap.cpp
// The following program uses this template to swap two doubles and two longs:
#include <iostream>
#include "swap.h"
// Command args: 2.3 4.5 78 567
int main(int argc, char* argv[]) {
    if (argc > 4) {
        double a = atof(argv[1]);
        double b = atof(argv[2]);
        long d = atol(argv[3]);
        long e = atol(argv[4]);

        swap(a, b);
        std::cout << "Swapped values are " << a << " and " << b << std::endl;

        swap(d, e);
        std::cout << "Swapped values are " << d << " and " << e << std::endl;
    }
}