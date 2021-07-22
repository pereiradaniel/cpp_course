#include <iostream>
using namespace std;

int main()
{
    // (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    int year, month;
    cout<<"Year, month: ";
    cin>>year>>month;

    switch (month)
    {
        case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout<<"29 days in this month.":cout<<"28 days in this month.";

    }

    system("pause>0");
}