// Aggregate Initialization
// initializers.cpp
#include <iostream>
int main() {
    const int n = 6;
    int a[] = { 1,2,3 };
    int b[]{ 1,2,3 };
    int c[5]{ 1,2,3 };
    int d[5]{};
    int* f = new int[n]{ 1,2,3 };
    int* g = new int[n]{};

    for (int e : a) // range-based for (see for_each.cpp)
        std::cout << e; // 123|
    std::cout << '|' << std::endl;

    for (int e : b)
            std::cout << e; // 123|
    std::cout << '|' << std::endl;

    for (int e : c)
        std::cout << e; // 12300|
    std::cout << '|' << std::endl;

    for (int e : d)
        std::cout << e; // 00000|
    std::cout << '|' << std::endl;

    for (int i = 0; i < n; ++i)
        std::cout << f[i]; // 123000|
    std::cout << '|' << std::endl;
    
    for (int i = 0; i < n; ++i)
        std::cout << g[i]; // 000000|
    std::cout << '|' << std::endl;
    
    delete[] f;
    delete[] g;
}