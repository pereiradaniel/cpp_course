// Variables and objects
// A variable occupies a region of memory, holds a value and has a name.
// An object occupies a region of memory, holds a value and may have a name.

A* a; // Variable with the name a, a pointer to an object of type A.
A b; // object with the name b, b is created on the stack - a variable.
a = new A(); // object without a name, *a is created on the heap - not a variable.