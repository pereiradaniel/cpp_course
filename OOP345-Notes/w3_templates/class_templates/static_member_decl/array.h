// Static Data Member Declaration
// array.h

// A template declaration for a family of classes that include a class variable requires a complementary template declaration to define and initialize the family of class variables. 

// Into our Array example, let us insert a class variable named count to count the number of objects of the Array class that currently exist.  We add the template declaration for the family of the class variables to the header file that contains the template declaration for the class and modify the constructor and destructor definitions:

template <typename T = int, int size = 50> 
class Array {
    T a[size];
    unsigned n;
    T dummy;
    static unsigned count; //
public:
    Array() : n{0}, dummy{0} { ++count; } //
    T& operator[](unsigned i) {
        return i < 50u ? a[i] : dummy; 
    } 
    static unsigned cnt() { return count; } //
    ~Array() { --count; } //
};

template <typename T = int, int size = 50>
unsigned Array<T>::count = 0u;