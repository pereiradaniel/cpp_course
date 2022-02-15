// Default Template Parameter Values
// array.h

// A template declaration for a family of classes accepts default parameter values.  We specify the default value in the same way that we specify a default value for a function parameter in a function declaration:

template <class T = int, int size = 50> // default params!
class Array {
    T a[size];
    unsigned n;
    T dummy;
public:
    Array() : n(0), dummy(0) {}
    T& operator[](unsigned i) {
        return i < 50u ? a[i] : dummy; 
    } 
};