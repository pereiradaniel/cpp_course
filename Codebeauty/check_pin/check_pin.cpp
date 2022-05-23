#include <iostream>
using namespace std;
int main()
{
    int userPin=1234, inputPin, errorCounter=0;
    do{
        cout<<"PIN: ";
        cin >> inputPin;
        if(inputPin!=userPin)
            errorCounter++;
    } while(errorCounter<3 && inputPin!=userPin);
    errorCounter<3 ? cout<<"Loading..." :
        cout<<"LOCKED!";
    system("pause>0");
}