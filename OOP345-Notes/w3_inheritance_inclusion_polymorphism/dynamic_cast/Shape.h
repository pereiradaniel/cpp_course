#ifndef SHAPE_H
#define SHAPE_H
// Polymorphic Objects - Dynamic Cast
// Shape.h

class Shape {
public:
    virtual double volume() const = 0;
    virtual void display() const = 0;

    // Let us upgrade the Shape interface to expose a query for comparing objects.  This function receives the address of an object and return true if the object has the same properties as the current object:
    virtual bool operator==(const Shape&) const = 0; 
};
#endif