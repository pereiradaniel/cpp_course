// Internal Linkage
// Module_b.cpp
#include <iostream>
void display();
static int local = 2;
int main() {
    display();
    display();
    std::cout << "local is at " << &local << '\n'; 
    std::cout << "local is " << local++ << '\n';
}