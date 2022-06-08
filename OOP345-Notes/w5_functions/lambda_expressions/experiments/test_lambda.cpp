#include <iostream>
int main()
{

    // lambda
    auto onePlusTwo = []() { return 1+2; };
    auto add = [](int i, int j) {return i+j; };

    std::cout << onePlusTwo() << std::endl;
    std::cout << add(4, 6) << std::endl;

}