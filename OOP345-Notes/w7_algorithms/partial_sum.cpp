// partial_sum
// The program on the left calculates the partial sums of the elements in vector v, displays them, then calculates their partial products and displays them:

// Algorithms - Partial Sum
// partial_sum.cpp

#include <iostream>
#include <vector>
#include <functional>
#include <numeric>
int main() {
    std::vector<int> v = {1, 2, 3, 4}, p(4);
std::partial_sum(v.begin(), v.end(), p.begin()); 
    for (auto i : p)
        std::cout << i <<  std::endl;
 
    std::partial_sum(v.begin(), v.end(), p.begin(),
    std::multiplies<int>());
 
    for (auto i : p)
        std::cout << i <<  std::endl;
}