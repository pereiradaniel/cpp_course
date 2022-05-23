#include <iostream>
using namespace std;

void main()
{
    // BMI calculator
    // weight(kg) / height * height(m)
    // under weight < 18.5
    // normal weight 18.5-24.9
    // overweight >25

    float weight, height, bmi;
    cout << "weight(kg), height(m): ";
    cin >> weight >> height;

    bmi = weight / (height * height);
    
    if (bmi < 18.5)
        cout << "underweight";
    else if (bmi > 25)
        cout << "overweight";
    else if (bmi > 18.5 && bmi < 24.9)
        cout << "normal";

    cout << endl<< "BMI = " << bmi;

    system("pause>0");
}