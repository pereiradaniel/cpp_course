// Aggregation
// Club.cpp
#include <iostream>
#include <cstring>
#include "Club.h"
#include "Name.h"

Club& Club::operator+=(const Name& n)
{
    if (m < M) // check if name list is full
        name[m++] = &n; // add the address to name n to the list
    return *this; // return this club
}

Club& Club::operator-=(const Name& t)
{
    bool found = false;
    int i;
    for (i = 0; i < m && !found; i++)
        if (!std::strcmp(name[i]->get(),
        t.get())) found = true;
    if (found) {
        for (; i < m; i++)
            name[i - 1] = name[i];
        if (m) {
            name[m - 1] = nullptr;
            m--;
        }
    }
    return *this;
}
void Club::display() const
{
    for (int i = 0; i < m; i++)
        std::cout << name[i]->get()
        << std::endl;
}
//...
