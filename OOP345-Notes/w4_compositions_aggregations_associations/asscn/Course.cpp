// Association
// Course.cpp
#include <iostream>
#include "Course.h"
#include "Room.h"

Course::Course(const char* n, int c) // rx's name and rm no.
:
    name{n},
    code{c}
{}

void Course::book(Room& r) // adds Room pointer to Course
{
    if (room) room->release(); // if room exists, remove
    room = &r; // set room to new Room pointer
}

void Course::release() // removes Room from Course
{
    room = nullptr; // just set this Room pointer to nullptr
}

const char* Course::get() const // query that returns the name
{
    return name.get();
}

void Course::display() const
{
    std::cout <<
    (room ? room->get() : "*****")
    << ' ' << code << ' ' << name.get() 
    << std::endl;
}
//...