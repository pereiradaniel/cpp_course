// Sort
// The program on the left sorts the elements in array a in descending order and displays the sorted result:

// Algorithms - Sort Descending Order
// sort.cpp
#include <iostream>
#include <algorithm>
#include <functional>
int main() {
    int a[] = {3, 2, 4, 1};
std::sort(a, &a[4], greater); 
    for(int e : a)
        std::cout << e <<  std::endl;
}
