// Simple Assignment
// The simple assignment operator (=) copies the value of the right operand without modification into the left operand.  We can cascade the assignment to several variables of a single value:

// Assignment Expressions
// assignment.cpp
#include <iostream>
int main() {
    int i, j, k;
    i = j = k = 3;
    std::cout << i << ' ' << j << ' ' << k << std::endl; 
}
