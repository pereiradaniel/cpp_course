// Resolving Ambiguities
// ambiguities.cpp
#include <iostream>
#include "swap.h"
int main(int argc, char* argv[]) {
    if (argc > 4) {
        double a = atof(argv[1]);
        double b = atof(argv[2]);
        float  d = atof(argv[3]);
        float  e = atof(argv[4]);
double c = maximum<double>(a, d); 
std::cout << "Greater of " <<
        a << ", " << d <<
        " is " << c << std::endl;
float f = maximum<float>(b, e);
std::cout << "Greater of " <<
        b << ", " << e <<
        " is " << f << std::endl;
    }
}