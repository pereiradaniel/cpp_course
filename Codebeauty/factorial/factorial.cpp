#include <iostream>
using namespace std;
int main()
{
    int number, result = 1;
    cout << "Number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
        result *= i;
    cout<<"Factorial = "<<result<<endl;
    system("pause>0");
}