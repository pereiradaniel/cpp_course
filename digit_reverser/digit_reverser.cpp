#include <iostream>
using namespace std;
int main()
{
    int number, result=0;
    cout << "Number: ";
    cin >> number;
    while(number!=0) {
        result*=10;
        int lastDigit=number%10;
        result+=lastDigit;
        number/=10;
    }
    cout<<"Reversed: " <<result<<endl;
    system("pause>0");
}