// copy_if
// The program on the left copies from the first 10 elements of vector v those elements that are odd into vector c and displays the all of the elements in c:

// Algorithms - Copy If
// copy_if.cpp
#include <vector>
#include <algorithm>
#include <iostream>
int main() {
    std::vector<int> v = {1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43}; 
    std::vector<int> c(15);
    std::copy_if(v.begin(), v.begin() + 10, c.begin(),
    [](int i) -> bool { return i % 2; });
    for (auto e : c)
    if (e) std::cout << e << std::endl; 
}