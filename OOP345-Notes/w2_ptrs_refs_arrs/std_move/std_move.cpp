// rvalue Reference using std::move()
// std_move.cpp

// The standard library provides two functions for specifying the type of reference when that is important:

// std::ref() - returns an lvalue reference to its argument (important of functions in the standard library)
// std::move() - returns an rvalue reference to its argument

#include <iostream>
#include <utility>
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
    A a(10), b(20);
    print(a);
    print(std::move(b));
}
