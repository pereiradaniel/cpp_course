// Direct Selection
// The direct selection operator (.) takes an object of complete class type as its left operand and the member name as its right operand: 
 
// Direct Selection
// direct.cpp
#include <iostream>
typedef struct {
    int x;
    double y;
} S;
int main() {
    S s = {0, 0.0};
    s.x = 1; // lvalue
    std::cout << "x = " << s.x << "; y = " << s.y << std::endl;
}