// A Sphere
// Sphere.h
#include "Shape.h"
class Sphere : public Shape {
    double rad;
public:
    Sphere(double);
    double volume() const;
    // The definition of each concrete class declares the clone() query:
    Shape* clone() const;
};