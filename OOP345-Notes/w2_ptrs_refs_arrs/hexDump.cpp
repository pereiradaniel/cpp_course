// Hexadecimal Representation at an Address
// hexDump.cpp

// The function hexDump() listed below displays the contents of a region of memory regardless of the type associated with that region.  The function receives the region's address and its size in number of bytes.  It casts the generic pointer a to a pointer to an unsigned char and displays the contents of c[i] in hexadecimal notation:
#include <iostream>
#include <iomanip>

void hexDump(void*, int);

int main() {
    int i;
    double x;

    std::cout << "Integer value  : ";
    std::cin >> i;
    std::cout << "is : ";
    hexDump(&i, 4);
    std::cout << std::endl;
    std::cout << "Floating-point value : "; 
    std::cin >> x;
    std::cout << "is : ";
    hexDump(&x, 8);
    std::cout << std::endl;
}

// Dump the first n bytes to the address a
//
void hexDump(void* a, int n) {
    unsigned char* c =
    static_cast<unsigned char*>(a);
    std::cout.fill('0');   // zero fill
    std::cout << std::hex; // hexadecimal output 
    for (int i = 0; i < n; i++)
        std::cout << std::setw(2)
        << (int)c[i] << ' ';
    std::cout.fill(' ');   // blank fill
    std::cout << std::dec; // decimal output
}