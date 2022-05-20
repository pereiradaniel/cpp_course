// Plain Enumerations
// plain_enum.cpp	
#include <iostream>

// define the Colour enumeration type
enum Colour {white, red, green, blue};

std::ostream& operator<<(std::ostream& os,
const Colour& colour) {
    std::string str;
    switch(colour) {
        case white: // symbolic constant
            str = "white";
            break;
        case red: // symbolic constant
            str = "red";
            break;
        case green: // symbolic constant
            str = "green";
            break;
        case blue: // symbolic constant
            str = "blue";
            break;
        default:
            str = "none";
    }
    os << str.c_str();
    return os;
}

int main() {
    Colour wall, ceiling, door; // define Colour variables 
    wall = red;
    ceiling = white;
    door = green;
    std::cout << wall << ' '
    << ceiling << ' ' << door << std::endl;
}
