// Count
// The program on the left counts the number of occurences of the value 12 in array a:

// Algorithms - Count
// count.cpp

#include <array>
#include <algorithm>
#include <iostream>

int main() {
    std::array<int, 11> a = {1, 12, 4, 5, 8, 9, 12, 13,
    16, 18, 12};
    int n = std::count(a.begin(), a.end(), 12);
    std::cout << "12 occurs "<< n << " times" << std::endl; 
}