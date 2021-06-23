// Left to Right
// Logical expressions evaluate their operands left-to-right as necessary.  In this respect, they differ from other binary expressions.  If the left operand determines the result, the right operand is not evaluated.  For instance, if the left operand is false and the operator is &&, the right operand is not evaluated.  Similarly, if the left operand is true and operator is ||, the right operand is not evaluated. 
// The following program does not increment either j or i:

// Logical Expressions
// logical.cpp
#include <iostream>
int main() {
    int i = 1, j = 1;
    
    std::cout << (i < 2 || j++ == 1) << ' ' << j << std::endl;
    
    std::cout << (j == 2 && i++ == 1) << ' ' << i << std::endl; 
}
