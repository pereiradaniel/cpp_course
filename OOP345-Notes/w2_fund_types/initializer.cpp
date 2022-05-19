// Initialization Expressions
// initializer.cpp

// A variable can be initialized at its declaration in several ways:
// # C-style
//      Copying the init val using the ass't operator on the same type
// # C-style narrowing, promotion
//      Copying the init val using the ass't operator on a diff type
// # Direct-list initialization type-safe universal form
//      Appending the braces-enclosed value to the decl'n 
// # Copy-list initialization universal form
//      Equating the declaration to a braces-enclosed value

#include <iostream>
int main() {
    int n0 = 7;             // C-style
    int n1 = 7.2;           // C-style, narrowing - lossy
    int n2 {6};             // universal form braces-enclosed list
    int n3 = {5};           // = is redundant

    std::cout<<"n0 = "<<n0<<std::endl;
    std::cout<<"n1 = "<<n1<<std::endl;
    std::cout<<"n2 = "<<n2<<std::endl;
    std::cout<<"n3 = "<<n3<<std::endl;

    return(0);
}

// The universal form is recommended.
// It checks the type of the value against the declared type and reports an error in the case of any mismatch.
// Since this form does not admit a narrowing of information, it is type-safe.