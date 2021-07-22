// Static Duration
// static.cpp
#include <iostream>
void display() {
    static int n = 1;
    std::cout << "n is " << n++ << std::endl; 
}
int main() {
    display();
    display();
}
