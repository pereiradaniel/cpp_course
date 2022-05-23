// Class Template - Array
// array.h

// The template declaration for a family of Array classes with elements of type T is simply:

template <typename T>
class Array {
    T a[50];
    unsigned n;
    T dummy;
public:
    Array() : n{0u}, dummy{0} {}
    T& operator[](unsigned i) {
        return i < 50u ? a[i] : dummy; 
    } 
};