#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "a, b, c: ";
    cin >> a >> b >> c;

    if (a==b && b==c)
    {
        cout << "Equilateral";
    }
    else
    {
        if (a!=b && a!=c && b!=c)
            cout << "Scalene";
        else
            cout << "Isosceles";
    }

    cout << endl << "Program complete";

    system("pause>0");
}