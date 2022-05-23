# ASSOCIATIONS

An association is a *service relationship*.  It does not involve any ownership of one type by another.  Each type is independent and complete without the related type.

Association is the least coupled relationship between classes.  Member functions in an association do not require forwarding member functions in the related type. 

Consider the relationship between a course and a room in a college.  The course uses the room and the room is booked for the course for a certain period, but both exist independently of one another.  A room can be booked for a course and a course can be assigned to a room.  Neither is destroyed when the other is destroyed.

[source](https://ict.senecacollege.ca/~oop345/pages/content/compo.html)