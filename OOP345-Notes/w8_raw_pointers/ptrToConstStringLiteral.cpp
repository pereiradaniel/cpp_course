// String Constants
// ptrToConstStringLiteral.cpp

#include <iostream>

int main() {
    const char *p  = "Avoid overwriting"; // good coding style 

    p[0] = 'a';  // error: assignment of read-only location '*p'
    std::cout << p << std::endl;
}