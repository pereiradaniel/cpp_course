// Static Duration
// static.cpp

// An integer of static duration can be used to count the number of times that a function has been called:

#include <iostream>
void display() {
    static int n = 1;
    std::cout << "n is " << n++ << std::endl; 
}

int main() {
    display();
    display();
}
