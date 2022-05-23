// Namespaces
// namespace.cpp
#include "dot.h"
#include "hat.h"
#include <iostream>
int main() {
    char s[51];
    std::cout << dot::leader(s) <<  10 << std::endl;
    std::cout << hat::leader(s) << 120 << std::endl;
}
