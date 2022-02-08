// Class Template - Array
// array.h

template <typename T> //
class Array {
    T a[50]; // T
    unsigned n;
    T dummy; // T
public:
    Array() : n{0u}, dummy{0} {}
    T& operator[](unsigned i) { //T&
        return i < 50u ? a[i] : dummy; 
    } 
};