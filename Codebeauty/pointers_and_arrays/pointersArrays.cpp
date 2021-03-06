#include <iostream>
using namespace std;
int main()
{
    // Creates an array of int with indexes 0-4
    int luckyNumbers[5] = { 2, 3, 5, 7, 9};
    
    // the name of the array is the address of its first element
    cout << luckyNumbers << endl;   // prints address of the first element of the array
    // first element of the array
    cout << &luckyNumbers[0] << endl; // matches above output

    // [] acts as dereferencing for array elements
    cout << luckyNumbers[2] << endl;
    // does the same as:
    cout<<*(luckyNumbers+2) << endl;

    int luckyNumbers2[5];
    // enter values for array:
    cout << "Enter 5 numbers: " << endl;

    for(int i = 0; i <=4 ;i++)  // input
        cin >> luckyNumbers2[i];

    for(int i = 0; i <=4 ;i++)  // output
        cout << *(luckyNumbers2 + i) << " ";

    system("pause>0");
    return 0;
}