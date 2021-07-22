// If the operand is an object of class type, the operation returns the sum of the sizes of the subobjects including any padding.  The result is implementation dependent.  For example,

// sizeof Operator
// sizeofStruct.cpp
#include <iostream>
typedef struct {
    char a;
    int b;
} A;
int main() {
    A s;
std::cout << sizeof s << std::endl;
}
