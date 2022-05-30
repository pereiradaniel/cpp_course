// Binary Expressions - 'a' is 97

#include <iostream>
using namespace std;

int compare(const char* a, const char* b) {

    while (*a == *b && *a && *b)
        cout << *a << '=' << *b << ' ', a++, b++;

    return *a - *b;
}


int main () {
    char a[] = "abcd";
    char b[] = "abcf";
    char c[] = "abc";

    cout << compare(a, b) << endl;
    cout << compare(a, c) << endl;
    cout << compare(c, b) << endl;
}

// OUTPUT:
// a=a b=b c=c -2
// a=a b=b c=c 100
// a=a b=b c=c -102