// The program on the left creates a vector of double objects and a parallel vector of references to those double objects.  It multiplies the values in the original vector by 3 and displays the values referred to by the reference wrapper:

// Functional - reference wrapper
// reference_wrapper_vector.cpp

#include <iostream>
#include <vector>
#include <functional>

int main() {
    std::vector<double> original(5, 10.3);
    std::vector<std::reference_wrapper<double>> 
    
    references(original.begin(), original.end());
    
    for (auto& e : original)
        e *= 3;
    
    for (auto e : references)
        std::cout << e << " ";

    std::cout << std::endl; 
}