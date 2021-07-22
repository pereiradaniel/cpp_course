// rvalue Reference using std::move()
// std_move.cpp
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
