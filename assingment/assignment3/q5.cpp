#include <iostream>

using namespace std;

struct date
{
    int day, month, year;
};
int main()
{
    date d;
    cout << "Enter the day,month and year :";
    cin >> d.day >> d.month >> d.year;
    cout << "The date is: " << d.day << '/' << d.month << '/' << d.year;
}