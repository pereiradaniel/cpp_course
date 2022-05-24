// Class Variables - Implementation
// classVariable.cpp
#include <iostream>
#include "classVariable.h"

unsigned Horse::noHorses = 0; // initializer 

Horse::Horse(unsigned a) : age{a}, no{++noHorses} {}

void Horse::display() const {
    std::cout << "Horse " << no <<
    " is " << age << " years old\n"; 
}

Horse::~Horse() { noHorses--; }