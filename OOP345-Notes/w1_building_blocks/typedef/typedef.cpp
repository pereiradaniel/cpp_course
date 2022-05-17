// Type Definition

// A type definition is an alias for a type.
// A type definition can simplify code readability for compound types.
// All type specifiers must be included in the type definition. New specifiers cannot be inserted when the synonym type is invoked.
// A typedef cannot include a linkage specifier.

typedef const int constInt; // defines the const int type as a constInt

constInt myConstant; // myConstant is a const int