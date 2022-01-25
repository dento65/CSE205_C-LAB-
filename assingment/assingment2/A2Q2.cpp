#include <iostream>

using namespace std;

int main()
{
    float weight,height,bmi;
    cout<<"enter the height in inches and weight in lbs: ";
    cin>>height>>weight;
    bmi = 703*(weight/(height*height));
    cout<<bmi;
    if(bmi<18.5)
        cout<<"underweight\n";
    else if(bmi<=24.9&&weight>=18.5)
        cout<<"normal\n";
    else if(bmi>=25&&bmi<=29.9)
        cout<<"overweight\n";
    else
        cout<<"obese\n";
}
