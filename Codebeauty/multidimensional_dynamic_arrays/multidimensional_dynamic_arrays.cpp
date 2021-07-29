#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout<<"rows, cols: ";
    cin>>rows>>cols;

    // Creates a array of pointers to dynamic arrays
    int **table=new int*[rows]; // pointer to a pointer

    // Create dynamic arrays
    for(int i=0; i<rows; i++)
        table[i]=new int[cols];

    table[1][2] = 88;
    cout<<table[1][2];

    // Deallocate memory
    // -----------------
    // Delete dynamic arrays
    for(int i=0; i<rows; i++)
        delete[] table[i];

    delete[] table;
    table = nullptr;

    system("pause>0");
    return 0;
}