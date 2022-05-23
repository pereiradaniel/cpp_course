 // Composition
 // composition.cpp
#include "Person.h"
int main() {
     Person p("Harvey", 23);
     Person q = p;
     p.display();
     q.display();
     q.set("Lawrence");
     p.display();
     q.display();
     p = q;
     p.display();
 }

//  The implementation files for both versions are listed below.  The Name object does not exist apart from the Person object.  In the subobject version, the default copying and assignment rules apply: the default copy constructor, assignment operator and destructor are sufficient.  In the pointer version, deep copying and assignment are required and we must code the copy constructor, assignment operator and destructor.  The Person constructor creates the Name object, the assignment operator destroys the old Name object and creates a new one, and the destructor destroys the Name object. 
