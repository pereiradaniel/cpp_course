// Static Data Member Declaration
// array.cpp

// Note that the parameter list following the template keyword for the family of class variables is identical to the list for the family of classes.

// The following example displays the number of objects of each type that have been instantiated:

// objects of the default type for an array of default size
// objects of the double type for an array with the default size
// objects of the int type for an array with a size of 40

#include <iostream>
#include "array.h"

int main() {
    // s and t are instances of class Array<>
    // u is an instance of the separate class Array<double>
    // v is an instance of the separate class Array<int, 40>
    Array<> s, t;
    Array<double> u;
    Array<int, 40> v;

    std::cout << Array<>::cnt() << std::endl;
    std::cout << Array<double>::cnt() << std::endl;
    std::cout << Array<int, 40>::cnt() << std::endl; 
}