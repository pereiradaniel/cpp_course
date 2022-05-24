// Copy and Move
// copy_move.cpp
#include <iostream>
#include <utility>
class Array {
    int* a = nullptr;
    unsigned n = 0u;
    int dummy = 0;
public:
    Array(){}
    Array(unsigned no) : a(new int[no]), n(no){}
    Array(const Array& src) { *this = src; } // copy constructor
    
    // ***move-constructor prototype***
    // receives rvalue reference to source object
    Array(Array&& src) { *this = std::move(src); } 
    
    // copy assignment
    Array& operator=(const Array& src) {
        if (this != &src) {
            delete [] a;
            a = new int[src.n];
            for (unsigned i = 0u; i < src.n; ++i)
                a[i] = src.a[i];
            n = src.n;
        }
        return *this;
    }
    
    // ***move-assignment operator***
    // receives rvalue reference to source object
    Array& operator=(Array&& src) {
        if (this != &src) {
            delete [] a; // deallocate current resource
            a = src.a;   // copy address to current object 
            src.a = nullptr; // initialize source resource 
            // swap instance variables
            n = src.n;
            dummy = src.dummy;
            // Initialize source
            src.n = 0u;
            src.dummy = 0;
        }
        return *this;
    }
    
    ~Array() { delete [] a; }       // destructor
    
    int& operator[](unsigned i) {
        return n > 0u && i < n ? a[i] : dummy; }
    int operator[](unsigned i) const {
        return n > 0u && i < n ? a[i] : dummy; }
    unsigned size() const { return n; }
};

int main() {
    const unsigned size = 5;
    
    Array a(size), b; // 1 arg constructor, default constructor
    
    // Fill Array a
    for (unsigned i = 0u; i < a.size(); ++i)
        a[i] = 3 * i;
    
    // Display Array a contents
    std::cout << "Copy-Assignment\n";
    std::cout << "a : ";
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
    
    // Fill Array b with contents of a
    b = a; // ***calls copy-assignment***
    std::cout << "b : ";
    
    // Display contents of array b
    for (unsigned i = 0u; i < b.size(); ++i)
        std::cout << b[i] << ' ';
    std::cout << std::endl;
    
    // Display contents of array a
    std::cout << "a : ";
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;

    // Display contents of array a
    std::cout << "Move-Assignment\n";
    std::cout << "a : ";
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
    
    b = std::move(a); // ***calls move-assignment***
    
    // Display contents of array b
    std::cout << "b : ";
    for (unsigned i = 0u; i < b.size(); ++i)
        std::cout << b[i] << ' ';
    std::cout << std::endl;

    // Display contents of array a (initialized to 0 elements)    
    std::cout << "a : ";
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
}
