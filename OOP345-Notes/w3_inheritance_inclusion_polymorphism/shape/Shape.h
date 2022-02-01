#ifndef SHAPE_H
#define SHAPE_H
// A Shape
// Shape.h
class Shape {
public:
    // The signature of the pure virtual function declares the exposed
    // member function uniquely.
    // The assignment to 0 identifies the function as undefined or pure. 
    virtual double volume() const = 0;
    virtual Shape* clone() const = 0;
};
#endif