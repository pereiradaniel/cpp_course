// Association
// Course.cpp
#include <iostream>
#include "Course.h"
#include "Room.h"

Course::Course(const char* n, int c)
:
    name{n}, // course name
    code{c} // course code
{}

void Course::book(Room& r)
{
    if (room) room->release(); // removes previous booking room
    room = &r; // sets room to new room
}

void Course::release()
{
    room = nullptr;
}

const char* Course::get() const
{
    return name.get(); // return Course name
}

void Course::display() const
{
    std::cout <<
    (room ? room->get() : "*****")
    << ' ' << code << ' ' << name.get() 
    << std::endl;
}
//...