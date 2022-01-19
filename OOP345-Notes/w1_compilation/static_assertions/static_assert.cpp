// Static Assertion
// static_assert.cpp

// The main function checks the value of N and reports an error if the value is outside practical bounds.

#include <assert.h>
#include <iostream>
constexpr int N = 0;
constexpr int factorial(int i) {
    return i > 1 ? i * factorial(i-1) : 1;
}

int main() {
    static_assert(N > 0, "N <=  0"); // static_assert.cpp(13): error C2338: N <=  0
    static_assert(N < 20, "N >= 20");
    int n {N};
    std::cout << n << "! = " << factorial(n) << std::endl;
    system("pause");
    return 0;
}