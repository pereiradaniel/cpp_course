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
    Array(Array&& src) { *this = std::move(src); } // move constructor prototype 
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
    Array& operator=(Array&& src) {
        if (this != &src) {
            delete [] a; // deallocate current resource
            a = src.a;   // copy address to current object 
            src.a = nullptr; // initialize source resource 
            // swap instance variables
            n = src.n;
            dummy = src.dummy;
            src.n = 0u;
            src.dummy = 0;
        }
        return *this;
    }
    ~Array() { delete [] a; }
    int& operator[](unsigned i) {
        return n > 0u && i < n ? a[i] : dummy; }
    int operator[](unsigned i) const {
        return n > 0u && i < n ? a[i] : dummy; }
    unsigned size() const { return n; }
};

int main() {
    const unsigned size = 5;
    
    Array a(size), b; // copy constructor, default constructor
    // Fill Array a
    for (unsigned i = 0u; i < a.size(); ++i)
        a[i] = 3 * i;
    
    std::cout << "Copy-Assignment\n";
    std::cout << "a : ";
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
    
    // Fill Array b with contents of a
    b = a; // calls copy-assignment
    std::cout << "b : ";
    
    for (unsigned i = 0u; i < b.size(); ++i)
        std::cout << b[i] << ' ';
    std::cout << std::endl;
    
    std::cout << "a : ";
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;

    std::cout << "Move-Assignment\n";
    std::cout << "a : ";
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
    
    b = std::move(a); // calls move-assignment
    
    std::cout << "b : ";
    for (unsigned i = 0u; i < b.size(); ++i)
        std::cout << b[i] << ' ';
    std::cout << std::endl;
    
    std::cout << "a : ";
    for (unsigned i = 0u; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
}
