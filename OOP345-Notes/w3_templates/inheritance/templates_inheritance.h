// Templates and Inheritance
// templates_inheritance_.h
#include <iostream>

// A class can be derived directly from a templated family of classes.  All the usual rules of inheritance and polymorphism apply.  In the following example, we need to pass the template parameter T from the Derived class to the Base class template since the base template requires that type:

template<typename T>
class Base {
    T value;
public:
    void set(const T& v) { value = v; }
    void display() const { std::cout << value << std::endl; } 
};

template<typename S, typename T>
class Derived : public Base<T> { // pass the template parameter T
    S value;
public:
    Derived(const S& v) : value{v}{}
    void set(const T& v) { Base<T>::set(v + value); }
};