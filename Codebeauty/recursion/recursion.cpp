#include <iostream>
using namespace std;

int recursive_sum(int m, int n) {
    if(m==n)
        return m;
    return m + recursive_sum(m+1, n);
}

// Sum numbers between m-n
int main()
{
    int m=0, n=0, sum=0;
    while (m>n || m==n) {
        cout << "Enter 2 numbers: ";
        cin>>m>>n;
    }

    cout << "Sum = " << recursive_sum(m, n);

    // for (int i=m; i<=n; i++)
    //     sum += i;

    // cout<<"Sum = "<<sum<<endl;

    system("pause>0");
}