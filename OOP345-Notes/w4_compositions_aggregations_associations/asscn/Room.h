// Association
// Room.h
#include "Name.h"
class Course;
class Room {
    Name name; // Required!
    Course* course { nullptr };  // default to nptr because doesn't require this relationship to exist!
public:
    Room(const char*);
    void book(Course&);
    void release();
    const char* get() const;
    void display() const;
    //...
};
