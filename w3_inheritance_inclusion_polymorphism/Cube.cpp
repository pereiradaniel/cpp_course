// A Cube
// Cube.cpp
#include "Cube.h"

// One-argument constructor
Cube::Cube(double l) : len{l} {}

// The Cube and Sphere implementation files define the class specific versions of the clone() member function:
Shape* Cube::clone() const {
     return new Cube(*this);
 }

double Cube::volume() const {
    return len * len * len;
}

// Casting from the abstract Shape* type to a concrete Cube* or Sphere* type enables access to a respective complete object.
bool Cube::operator==(const Shape& s) const {
    const Cube* c = dynamic_cast<const Cube*>(&s);
    return c ? len == c->len : false;
}