If any whitespace is present between the symbolic name and the opening left parenthesis, the pre-processor interprets the left parenthesis as the first character of the replacement text.  For example, the pre-processor converts the following code

```
// Function-Like Macros
// fnMacrosError.cpp

#include <iostream>

#define PI 3.14
#define AREA (R) PI * R * R // WHITESPACE BEFORE (  

int main() {
    double area = AREA(2.35);
    std::c
```
into
```

// Function-Like Macros
// fnMacrosError.i

// iostream declarations here

int main() {
    double area = (R) 3.14 * R * R(2.35) /* <- CAUSES COMPILER ERROR */; 
    std::cout << "Area is " << area << std::endl;
}
```