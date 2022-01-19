// Initialization Expressions
// initializer.cpp
#include <iostream>
int main() {
    int n0 = 7;             // C-style
    int n1 = 7.2;           // C-style, narrowing - lossy
    int n2 = {6};           // universal form braces-enclosed list
    int n3 = {5};           // = is redundant

    std::cout<<"n0 = "<<n0<<std::endl;
    std::cout<<"n1 = "<<n1<<std::endl;
    std::cout<<"n2 = "<<n2<<std::endl;
    std::cout<<"n3 = "<<n3<<std::endl;

    return(0);
}

// The universal form is recommended.  It checks the type of the value against the declared type and reports an error in the case of any mismatch.  Since this form does not admit a narrowing of information, it is type-safe.