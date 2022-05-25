// Function Template
// swap.h
// The following function template defines a family of functions that swap two valyes of type T.
template <typename T>
void swap(T& a, T& b) {
    T c;
    c = a;
    a = b;
    b = c;
}