#include <iostream>
using namespace std;

template<typename T>
void Swap(T& a, T& b) {
    T temp=a;   // T = generic data type
    a=b;
    b=temp;
}

int main()
{
    int a=5, b=7;
    char c='c', d='d';
    cout<<a<<" - "<<b<<endl;
    Swap<int>(a, b); // can specify the type by invocation
    cout<<a<<" - "<<b<<endl;


    cout<<c<<" - "<<d<<endl;
    Swap<char>(c, d);
    cout<<c<<" - "<<d<<endl;
    system("pause>0");
    return 0;
}