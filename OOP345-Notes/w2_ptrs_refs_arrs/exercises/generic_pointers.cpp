// Generic Pointers

// Program output:
// (a,b) = (7,4)
// (x,y) = (3.5,2.5)

#include <iostream>
#include <iomanip>

void q(void *a, void *b, int n) {

    unsigned char *ca = (unsigned char *)a;
    unsigned char *cb = (unsigned char *)b;
    unsigned char c;

    for (int i = 0; i < n; i++) {
        c     = ca[i];
        ca[i] = cb[i];
        cb[i] = c;
    }
}

int main() {

    int a = 4, b = 7;
    float x = 2.5f, y = 3.5f;

    q(&a, &b, sizeof(int));
    q(&x, &y, sizeof(float));

    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "(a,b) = (" << a << ',' << b << ')' << std::endl;
    std::cout << "(x,y) = (" << x << ',' << y << ')' << std::endl; 
}