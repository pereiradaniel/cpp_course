// If the operand is an array name and the size of the array is within the scope of the expression, the sizeof operator returns the size of the array in bytes; that is, the number of elements in the array times the size of the type of one array element.  However, if the operand is a function parameter that holds the address of an array, the operator returns the size of the pointer that holds the address, and not the size of the array: 

// sizeof Operator
// sizeofArray.cpp
#include <iostream>
int foo(double a[]) {
    a[0] = 1.0;
    return sizeof a;
}
int main() {
    double a[] = {1.1, 2.2, 3.3, 4.4};
    std::cout << sizeof a << std::endl;
    std::cout << foo(a) << std::endl;
}