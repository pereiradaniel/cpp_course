#include <iostream>
using namespace std;
int main()
{
    // Arrays store data in contiguous memory (faster)
    // Linked list does not (slower)
    int size;
    cout << "Size: ";
    cin>>size;
    // int myArray[size];
    int *myArray=new int[size];

    for (int i=0; i<size; i++) {
        cout<<"Array["<<i<< "]";
        cin>>myArray[i];
    }

    for (int i=0; i<size; i++)
        // cout << myArray[i]<<" ";
        cout << *(myArray+i)<<" ";

    // deallocate memory
    delete[]myArray;
    myArray = nullptr;
    
    system("pause>0");
    return 0;
}