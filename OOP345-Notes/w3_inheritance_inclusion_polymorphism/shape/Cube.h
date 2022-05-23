// A Cube
// Cube.h
#include "Shape.h"
class Cube : public Shape {
    double len;
public:
    Cube(double);
    double volume() const;
    // The definition of each concrete class declares the clone() query:
    Shape* clone() const;
};