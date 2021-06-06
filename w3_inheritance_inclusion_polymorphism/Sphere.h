// A Sphere
// Sphere.h
#include "Shape.h"
class Sphere : public Shape {
    double rad;
public:
    Sphere(double);
    double volume() const;
    // The definition of each concrete class declares the clone() query:
    virtual void display() const = 0;
    bool operator==(const Shape&)
      const;
};