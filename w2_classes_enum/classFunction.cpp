// Class Functions - Header
// classFunction.h
class Horse {
    unsigned age;
    unsigned no;
    static unsigned noHorses;
public:
    Horse(unsigned a);
    void display() const;
    ~Horse();
    static unsigned howMany();
};

// Class Functions - Implementation
// classFunctioncpp
#include <iostream>
#include "classFunction.h"
unsigned Horse::noHorses = 0;
Horse::Horse(unsigned a) : age{a}, no{++noHorses} {}
void Horse::display() const {
    std::cout << "Horse " << no <<
    " is " << age << " years old\n";
}
Horse::~Horse() { noHorses--; }
unsigned Horse::howMany() { return noHorses; }

// Class Functions - Application
// classFunctionMain.cpp
#include <iostream>
#include "classFunction.h"
int main() {
    std::cout << Horse::howMany() << " horses\n";
    {
        Horse silver(3), northernDancer(4);
        silver.display();
        northernDancer.display();
        std::cout << Horse::howMany() << " horses"
        << std::endl;
        std::cout << silver.howMany() << " horses"
        << std::endl;
        std::cout << northernDancer.howMany()
        << " horses" << std::endl;
    }
    std::cout << Horse::howMany() << " horses\n";
}
