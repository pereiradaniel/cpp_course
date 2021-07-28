#include <iostream>
using namespace std;

// Sum numbers between m-n
int main()
{
    int m=0, n=0, sum=0;
    while (m>n || m==n) {
        cout << "Enter 2 numbers: ";
        cin>>m>>n;
    }

    for (int i=m; i<=n; i++)
        sum += i;

    cout<<"Sum = "<<sum<<endl;

    system("pause>0");
}