// Class Variables - Application
// classVariableMain.cpp
#include <iostream>
#include "classVariable.h"
int main() {
    std::cout << Horse::noHorses << " horses\n";
    {
        Horse silver(3), northernDancer(4);
        silver.display();
        northernDancer.display();
        std::cout << Horse::noHorses
        << " horses" << std::endl;
        std::cout << silver.noHorses
         << " horses" << std::endl;
        std::cout << northernDancer.noHorses
        << " horses" << std::endl;
    }
    std::cout << Horse::noHorses << " horses\n"; 
}
