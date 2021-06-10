#include <iostream>
using namespace std;

int main()
{
    // User enters integer number
    // Write out if number is even or odd

    int number;
    cout << "Enter a whole number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }

    system("pause>0");
}