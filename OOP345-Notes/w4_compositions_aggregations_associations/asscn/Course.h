// Association
// Course.h
#include "Name.h"
// Forward declaration: Declare a class type which will be
// defined later in this scope.
class Room;
class Course {
    Name name;
    int code;
    Room* room { nullptr };
public:
    Course(const char*, int); 
    void book(Room&);
    void release();
    const char* get() const;
    void display() const;
    //...
};
