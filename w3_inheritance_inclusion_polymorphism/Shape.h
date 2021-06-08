#ifndef SHAPE_H
#define SHAPE_H
// A Shape
// Shape.h
class Shape {
public:
    // The signature of the pure virtual function declares the exposed member function uniquely.  The assignment to 0 identifies the function as undefined or pure. 
    virtual double volume() const = 0;

    // To determine the dynamic type at run-time we introduce a cloning member function to the hierarchy.
    // Let us upgrade the Shape interface to expose a clone() query.  This member function returns the address of a copy of the object created using its dynamic type.
    virtual Shape* clone() const = 0;
};
#endif
