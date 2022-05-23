// rvalue Reference
// rvalue.cpp

// An rvalue reference declaration identifies an object that is less permanent, possibly temporary.
// For example:

#include <iostream>
class A {
    int a;
public:
    A(int aa) : a(aa) {}
    void display(const char* str) const {
        std::cout << str << ' ' << a << std::endl;
    }
};

void print(const A& a) { a.display("lvalue "); }
void print(A&& a)      { a.display("rvalue "); }

int main() {
    A a(10);
    print(a);
    print(A(20));
}

// Practical uses for rvalue references include the move-constructors and move-assignment operators described in the chapter entitled Classes and Scoped Enumerations.