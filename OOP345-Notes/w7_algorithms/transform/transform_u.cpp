// transform
// The transform function templates perform programmer-specified transformations on the elements of a sequence.  A function object defines the transformation.
// The program on the left multiplies each element in vector v by 3, stores the result in vector c and displays the contents of vector c:
 
// Algorithms - Transform - Unary Operation
// transform_u.cpp
#include <vector>
#include <algorithm>
#include <iostream>
int main() {
    std::vector<int> v = {1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43}; 
    std::vector<int> c(11);
    std::transform(v.begin(), v.end(), c.begin(),
    [](int i) { return 3 * i; });
    for (auto e : c)
        std::cout << e << std::endl; 
}
