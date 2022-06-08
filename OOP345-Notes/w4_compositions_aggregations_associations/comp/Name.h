#ifndef NAME_H
#define NAME_H
// Composition - Name
// Name.h
// Pointer version requires Copy constructor, assignment operator and
// destructor to deal with pointer!!!
class Name {
    char* name { nullptr };
public:
    Name(const char*);              // 1-Arg Constructor
    Name(const Name&);              // Copy Constructor, deep copying
    Name& operator=(const Name&);   // Assignment Operator, deep assignment
    ~Name();                        // Destructor, required
    const char* get() const;        // Getter
    void set(const char*);          // Setter
};
#endif