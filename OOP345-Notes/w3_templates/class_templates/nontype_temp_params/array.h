// Non-Type Template Parameters
// array.h

// Non-type template parameters can receive the size of an array.
template <class T, int size>
class Array {
    T a[size];
    unsigned n;
    T dummy;
public:
    Array() : n{0u}, dummy{0} {}
    T& operator[](unsigned i) {
        return i < 50u ? a[i] : dummy; 
    } 
};