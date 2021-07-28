#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp=a;
    a=b;
    b=temp;
}

void swap(char& a, char& b) {
    char temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=5, b=7;
    char c='c', d='d';
    cout<<a<<" - "<<b<<endl;
    swap(a, b);
    cout<<a<<" - "<<b<<endl;


    cout<<c<<" - "<<d<<endl;
    swap(c, d);
    cout<<c<<" - "<<d<<endl;
    system("pause>0");
    return 0;
}