// Copying Operations

// Copying a polymorphic object at run-time requires knowledge of its dynamic type.  In order to allocate memory for the copy, the executable needs to know the dynamic type.  For example, the following copy function needs to know which copy constructor to call - Cube or Sphere:

// Copy a Shape Object
// copy_shape.cpp
#include "Shape.h"

Shape* copy(const Shape& original) {
    // To determine the dynamic type at run-time we introduce a cloning member function to the hierarchy.
    Shape* copy = new ???? (original); 
    return copy;
}