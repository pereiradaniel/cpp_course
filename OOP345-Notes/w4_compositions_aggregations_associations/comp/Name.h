#ifndef NAME_H
#define NAME_H
// Composition - Name
// Name.h
class Name {
    char* name { nullptr };
public:
    Name(const char*);              // 1-Arg Constructor
    Name(const Name&);              // Copy Constructor
    Name& operator=(const Name&);   // Assignment Operator
    ~Name();                        // Destructor
    const char* get() const;        // Getter
    void set(const char*);          // Setter
};
#endif
