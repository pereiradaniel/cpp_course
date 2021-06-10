#include <iostream>
using namespace std;

int main()
{
    // Swap two values without a third value
    int a = 20;
    int b = 10;

    a = a + b; // 30
    b = a - b; // 30 - 10: 20
    a = a - b; // 30 - 10: 10
    cout << "a = " << a << ", b = " << b << endl;
}