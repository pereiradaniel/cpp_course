// decltype with templates
// decltype.cpp

#include <iostream>

template<typename T, typename U>
// return type is result of evaluating t+u
auto add(const T& t, const U& u) -> decltype(t + u) { return t + u; } 

int main() {
    int i = 3, j = 6;
    double x = 4.5;
    std::cout << add(i, j) << std::endl;
    std::cout << add(i, x) << std::endl;
}

////////
// Notes
////////
// decltype specifier https://devdocs.io/cpp/language/decltype:
    // Inspects the declared type of an entity or the type and value category of an expression.