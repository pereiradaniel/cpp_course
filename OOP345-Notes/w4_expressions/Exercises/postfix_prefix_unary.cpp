// Postfix, Prefix, and Unary Expressions

#include <iostream>
using namespace std;

char* reverse(char *out, const char *in) {
    unsigned len = 0u;
    char *p = out;

    while(*in++ != '\0') len++;
    in--;

    while (len-- != '\0') {
        *p++ = *--in;
        cout << p[-1] << ' ';
    }
    *p = '\0';
    return out;
}

int main() {
    char name[] = "star";
    char copy[5];

    cout << "=>" << reverse(copy, name) << endl;
    reverse(name, copy)[3] = 'y';
    cout << "=>" << name << endl;
}

// OUTPUT:
// =>r a t s rats
// s t a r =>stay