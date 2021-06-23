#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    
    cout<<"Host: ";
    cin>>hostUserNum;
    
    system("cls");
    
    cout<<"Guest: ";
    cin>>guestUserNum;
    
    cout << (hostUserNum == guestUserNum ? "Correct!" : "Failed!");
    system("pause>0");
}