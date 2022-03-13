#include <iostream>

using namespace std;

struct employee
{
    int no;     //employee number
    float comp; //compensation
};
int main()
{
    employee e1, e2, e3;
    cout << "Enter the number and compensation of 1st,2nd and 3rd employee:";
    cin >> e1.no >> e1.comp >> e2.no >> e2.comp >> e3.no >> e3.comp;
    cout << "for employee number " << e1.no << "the compensation is: " << e1.comp << endl;
    cout << "for employee number " << e2.no << "the compensation is: " << e2.comp << endl;
    cout << "for employee number " << e3.no << "the compensation is: " << e3.comp << endl;
}
