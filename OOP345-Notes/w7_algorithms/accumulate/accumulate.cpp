// accumulate
// The program on the left sums the elements in array a, displays the result, then sums twice their values and displays that result:

// Algorithms - Accumulate
// accumulate.cpp

#include <iostream>
#include <numeric>
int main() {
    int a[] = {3, 2, 4, 1}, s;
    s = std::accumulate(a, &a[4], (int)0);
    std::cout << "sum = " << s <<  std::endl;
    s = std::accumulate(a, &a[4], (int)0,
    [](int x, int y) { return x + 2 * y; }); 
    std::cout << "2 * sum = " << s <<  std::endl; 
}