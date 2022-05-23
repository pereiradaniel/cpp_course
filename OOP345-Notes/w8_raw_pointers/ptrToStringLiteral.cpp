// Pointing to a String Literal
// ptrToStringLiteral.cpp

#include <iostream>

int main() {
    char *p  = "Avoid overwriting"; // poor coding style 

    p[0] = 'a';  // ISO C++ forbids converting a string constant to a 'char*' 
    std::cout << p << std::endl;
}