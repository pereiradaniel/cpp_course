// // Composition - SubObject Version
// // Person.h
// #include "Name.h"
// class Person {
//     Name name; // subobject
//     int age;
// public:
//     Person(const char*, int);
// void display() const;
//     void set(const char*);
//     //...
// };

//  Composition - Pointer Version
//  Person.h

class Name;

class Person {
    Name* name { nullptr }; // pointer
    int age;
public:
    Person(const char*, int);           // 2-Arg Constructor
    Person(const Person& src);          // Copy Constructor
    Person& operator=(const Person&);   // Assignment Operator
    ~Person();                          // Destructor
    void display() const;               // Display query
    void set(const char*);              // Setter
    //...
};