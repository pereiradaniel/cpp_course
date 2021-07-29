// Smart Pointer for title
// SmartPtr.cpp

#include <iostream>
#include "Title.h"
#include "SmartPtr.h"

void display(const char* s) {
    SmartPtr<Title> t(new Title(s));
    t->display();
}

int main() {
    const char* s[] = {"Mr.", "Ms.", "", "Dr."}; 

    for (auto x : s) {
        try {
            display(x);
        } catch(const char* msg) {
            std::cerr << msg << std::endl;
        }
    }
}