// Association
// Room.h
#include "Name.h"
class Course;
class Room {
    Name name; // Room name
    Course* course { nullptr };  // no courses initial
public:
    Room(const char*);
    void book(Course&);
    void release();
    const char* get() const;
    void display() const;
    //...
};
