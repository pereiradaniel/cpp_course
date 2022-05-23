// Copy-Construction, Copy-Assignment and Subscripting Operator
// copy_assign.cpp

// Copy Construction and Copy Assignment

// Classes that include resources manage them through user-defined copy constructors, copy-assignment operators and destructuctors.  In the following example, member initialization syntax simplifies the coding of these special member functions.  The C++ language allows dynamic memory allocation of 0 (zero) elements, but requires its destruction to complement it. 

#include <iostream>	
class Array {
    // Default member initializers
    int* a = nullptr;
    unsigned n = 0u;
    int dummy = 0;
public:
    Array(){}                                       // Default constructor
    Array(unsigned no) : a(new int[no]), n(no){}    // 1 argument, 2 defaults
    
    Array(const Array& src) { *this = src; }        // ***copy-constructor***

    Array& operator=(const Array& src) {            // ***copy-assignment***
        if (this != &src) {
            delete [] a;            // Delete int array a
            a = new int[src.n];     // Set a to new int array of src.n size
            for (unsigned i = 0u; i < src.n; ++i)   // Loop through src.n times
                a[i] = src.a[i];    // this.a[i] set to src.a[i]
            n = src.n;              // uns int n set to number of elements src.n
        }
        return *this;
    }

    ~Array() { delete [] a; }                       // destructor
    
    // lvalue and rvalue versions of subscripting operators
    // If n is gtr 0u and i less than n(num elements) then let a[i] else 0
    int& operator[](unsigned i) { return n > 0u && i < n ? a[i] : dummy; }
    int operator[](unsigned i) const { return n > 0u && i < n ? a[i] : dummy; }
    unsigned size() const { return n; }
};

int main() {
    const unsigned size = 5;
    Array a(size), b; // 

    // Fill Array a
    for (unsigned i = 0u; i < a.size(); ++i)
        a[i] = 3 * i;

    // Print the contents of a
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' '; // 0 3 6 9 12
    std::cout << std::endl;
    
    // Copy contents of a into b
    b = a; // copy-assignment

    // Print the contents of b
    for (unsigned i = 0u; i < b.size(); ++i)
        std::cout << a[i] << ' '; // 0 3 6 9 12
    std::cout << std::endl;
};

// This example also shows how to code lvalue and rvalue versions of the subscripting operator ([]).

// This example also shows how to code lvalue and rvalue versions of the subscripting operator ([]).  The lvalue version returns a reference to either an element of the array or to the dummy instance variable.  Both versions check that the index received is within bounds and if outside refer to this dummy variable.  This ensures that any change by the lvalue version of the subscripting operator does not corrupt memory outside the memory referred to by the object. 