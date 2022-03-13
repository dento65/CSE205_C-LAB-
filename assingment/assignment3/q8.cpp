#include <iostream>

using namespace std;

struct fraction
{
    float num, deno; //numerator and denominator
};

int main()
{
    fraction f1, f2, sum;
    cout << "Enter the numerator an denominator of 1st fraction to be added : ";
    cin >> f1.num >> f1.deno;
    cout << "Enter the numerator an denominator of 2nd fraction to be added : ";
    cin >> f2.num >> f2.deno;
    sum.num = f1.num + f2.num;
    sum.deno = f1.deno + f2.deno;
    cout << "\nThe numerator of resultant fraction is: " << sum.num;
    cout << "\nThe denominator of resultant fraction is: " << sum.deno;
}