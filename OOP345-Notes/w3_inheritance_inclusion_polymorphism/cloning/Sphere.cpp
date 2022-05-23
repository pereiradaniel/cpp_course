// A Sphere
// Sphere.cpp
#include "Sphere.h"

// One-argument constructor
Sphere::Sphere(double r) : rad{r} {}

Shape* Sphere::clone() const {
    return new Sphere(*this);
}

double Sphere::volume() const {
    return 4.18879 * rad * rad * rad;
}
