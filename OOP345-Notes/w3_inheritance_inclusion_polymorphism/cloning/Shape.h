#ifndef SHAPE_H
#define SHAPE_H
// A Shape
// Shape.h
class Shape {
public:
    // The signature of the pure virtual function declares the exposed member function uniquely.
    virtual double volume() const = 0; // 0 = pure virtual func
    virtual Shape* clone() const = 0;
};
#endif