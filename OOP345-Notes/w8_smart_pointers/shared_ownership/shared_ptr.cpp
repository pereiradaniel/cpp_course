// Shared Ownership
// shared_ptr.cpp

#include <iostream>
#include <memory>
#include "Title.h"

void display(const char* s) {
    std::shared_ptr<Title> t1(new Title(s));
    t1->display();
    std::shared_ptr<Title> t2(t1);
    t2->display();
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