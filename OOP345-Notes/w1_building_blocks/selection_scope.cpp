// Selection Constructs - Block Scope
// selection_scope.cpp
#include <iostream>
int main() {
     int i;
     std::cout << "Enter i : ";
     std::cin >> i;
     if (int j = i % 10; j < 5) { // C++17
         i -= j;      // round down
         std::cout << "i: " << i << '\n';
         std::cout << "j: " << j << '\n';
     } else {
         i += 10 - j; // round up
     }

    std::cout << i << std::endl;
    
    std::cout << "Enter i : ";
    std::cin >> i;
    
    switch (int j = i % 10; j / 5) { // C++17
    case 0: // round down
        std::cout << "i: " << i << '\n';
        std::cout << "j: " << j << '\n';
        i -= j;
         break;
    case 1: // round up
        std::cout << "i: " << i << '\n';
        std::cout << "j: " << j << '\n';
        i += 10 - j;
    }
    
    std::cout << i << std::endl;
 }
