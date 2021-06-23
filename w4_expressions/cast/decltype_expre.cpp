// decltype() Specifier
// The decltype() specifier evaluates to the type and value category of its argument.  The operand may be an entity or an expression.  The value category of the expression affects the type:

// 	• if the value category of the expression is an xvalue, then the type is T&&
// 	• if the value category of the expression is an lvalue, then the type is T&
// 	• if the value category of the expression is a prvalue, then the type is T

// decltype with expressions
// decltype_expre.cpp	
#include <iostream>

int main() {
    int i = 3, j = 6;
    double x = 4.5;
    double& r = x;
    decltype(i + j) y = i + j; // int y
    decltype(i + x) z = i + x; // double z
    decltype(r) s = r;         // double& s 
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << s << std::endl;
}