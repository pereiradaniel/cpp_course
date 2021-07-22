// The program on the left binds two arguments to function std::increment(), one by reference and the other by value and displays their values after inc() has updated them:

// Functional - create a reference wrapper
// ref.cpp

#include <iostream>
#include <functional>

void increment(int& x, int& y) { ++x, ++y; }

int main() {
    int a = 10, b = 20;
    auto inc = bind(increment, std::ref(a), b);
    inc();
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}
