// Algorithms - Transform - Binary Operation
// transform_b.cpp

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int main() {
    std::vector<int> a = {1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43}; 
    std::vector<int> b = {2, 1, 0, 1, 2, 3, 16, 23, 21, 17, 32}; 
    std::vector<int> c(11);
    std::transform(a.begin(), a.end(), b.begin(), c.begin(),
    std::plus<int>());

    for (auto e : c)
        std::cout << e << std::endl; 
}
