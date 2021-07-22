#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << &n << endl;

    int* ptr = &n; // pointer holds the address of n variable
    cout << ptr << endl;

    // to access the value of ptr, it must be dereferenced
    cout << *ptr << endl;

    // to change the value of the address pointed to by ptr
    *ptr = 14;
    cout << *ptr << endl;
    cout << n << endl;

    // Pointers must be of the same type!:
    //      int, int* ptr
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << *ptr2 << endl;

    system("pause>0");
    return 0;
}