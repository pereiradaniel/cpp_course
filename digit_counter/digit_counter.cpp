#include <iostream>
using namespace std;

int main()
{
    // Count the digits of a number
    int number;
    cout<<"Number: ";
    cin>>number;

    if (number==0)
        cout<<"You have entered 0.";
    else {
        int counter=0;
        while(number>0)
            number/=10, counter++;
        cout<<"Number has "<<counter<<" digits."<<endl;
    }

    system("pause>0");
}