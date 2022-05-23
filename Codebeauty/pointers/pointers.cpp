#include <iostream>
using namespace std;
// Pointer stores an address to a memory location.
int main()
{
    int n = 5;          // n is a variable
    cout << &n << endl; // the address of n

    // Create a pointer by selecting a type and using the *
    int* ptr = &n; // pointer holds the address of n variable
    cout << ptr << endl;    // Outputs address of n

    // to access the value of ptr, it must be dereferenced
    cout << *ptr << endl;   // 5

    // to change the value of the address pointed to by ptr
    *ptr = 14;
    cout << *ptr << endl;   // 14
    cout << n << endl;      // 14

    // Pointers must be of the same type!:
    //      int, int* ptr
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << *ptr2 << endl;

    system("pause>0");
    return 0;
}