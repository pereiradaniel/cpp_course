// Indirect Selection
// The indirect selection operator (->) takes a pointer to an object of complete class type as its left operand and the member name as its right operand

// Indirect Selection
// indirect.cpp
#include <iostream>
typedef struct {
    int x;
    double y;
} S;
S* add2(S *s) {
    s->x += 2;
    s->y += 2;
    return s;
}
int main() {
    S s = {0, 0};
    add2(&s)->x++;  // add2(&s) is modifiable
    (&s)->y++;
    std::cout << "x = " << s.x << "; y = " << s.y << std::endl;
}