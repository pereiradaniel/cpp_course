// Type Alignment
// align.cpp

// An alignment requirement represents the number of bytes between successive addresses of objects of a given type.  Every object type has an alignment requirement.  We can specify the alignment of an object type using alignas(). 

// In the following program, the alignment of A is 4, because the member int n needs to be allocated on a 4-byte boundary.  However, the alignment of B is 16, because we have specified that aligned alignas(16), where 16 is an integral multiple of an 8-byte boundary. 

#include <iostream>

// A is allocated at 4-byte boundaries
 struct A {
     int n;  // size 4 alignment 4
     char c; // size 1 alignment 1
 };          // size 8 alignment 4

// B is allocated at 16-byte boundaries
 struct alignas(16) B {
     int n;  // size 4 alignment 4
     char c; // size 1 alignment 1
 };          // size 8 alignment 16

int main() {
     A a[] {1, 'a', 2, 'b', 3, 'c'};
     std::cout << "align of A = " << alignof(A) << std::endl; // 4
     
     for (int i = 0; i < 3; ++i) {
         std::cout << &a[i] << ": " << a[i].n << ", " << a[i].c << std::endl; 
     }

    B b[] {1, 'a', 2, 'b', 3, 'c'};
     std::cout << "align of B = "
      << alignof(B) << std::endl; // 16
     for (int i = 0; i < 3; ++i) {
         std::cout << &b[i] << ": " << b[i].n << ", " << b[i].c << std::endl;
     }
 }