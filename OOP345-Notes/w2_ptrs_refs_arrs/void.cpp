// Generic Pointer Type
// void.cpp
#include <iostream>
int main() {
    int i;
    void* v = &i;
    int* j;
    j = static_cast<int*>(v);  // OK - j now holds the address of i 
    std::cout << &i << std::endl;
    std::cout << j << std::endl;
}

// Converting from one pointer type to another requires an explicit cast:

//  int* i;
//  char* c;
//  i = c; // ERROR - Incompatible 
//         // Different Pointer Types

//  int* i;
//  char* c;
//  i = static_cast<int*>(
//      static_cast<void*>(c)); // OK 