#include <iostream>

using namespace std;

enum etype // enum of employee type
{
    laborer = 'l',
    accountant = 'a',
    excutive = 'e',
    researcher = 'r',
    secretary = 's',
    manager = 'm'
};
struct employee // structure for employee details
{
    int no, day, month, year;
    float comp; //compensation
    etype et;
};
string f(char c) //function to return the full employee type taking first
// letter of employee type as argument
{
    string s;
    switch (c)
    {
    case manager:
        s = " Manager";
        break;
    case accountant:
        s = "accountant";
        break;
    case excutive:
        s = "excutive";
        break;
    case laborer:
        cout << "laborer";
        break;
    case secretary:
        s = s = s = "secretary";
        break;
    case researcher:
        s = s = "researcher";
        break;
    default:
        s = "Invalid input";
        break;
    }
    return s;
}
int main()
{
    employee e1, e2, e3; // 3 structs of employees for employee data
    char c1, c2, c3;

    //for user help
    cout << "Enter the number, compensation,employee type(only first character) \n";
    cout << "and date of  employement(day,month,year) of 1st,2nd and 3rd employee:\n";
    cout << "i.e: 72 50000 r 01 11 2022 is the detail for first employee :";

    cin >> e1.no >> e1.comp >> c1 >> e1.day >> e1.month >> e1.year >> 
    e2.no >> e2.comp >> c2 >> e2.day >> e2.month >> e2.year >> // input the details of 3 employees
    e3.no >> e3.comp >> c3 >> e3.day >> e3.month >> e3.year;

    e1.et = static_cast<etype>(c1);
    e2.et = static_cast<etype>(c2); // type casting char in enum type
    e3.et = static_cast<etype>(c3);

    cout << "\nfor employee number " << e1.no << ", compensation is: " << e1.comp << ",employee type is:" << f(e1.et) << " and the employement date is :" << e1.day << '/' << e1.month << '/' << e1.year << endl;
    // output the details of first employee

    cout << "for employee number " << e2.no << " , compensation is: " << e2.comp << ", employee type is:" << f(e2.et) << " and the employement date is :" << e2.day << '/' << e2.month << '/' << e2.year << endl;
    // output the details of second employee

    cout << "for employee number " << e3.no << " , compensation is: " << e3.comp << " , employee type is:" << f(e3.et) << " and the employement date is :" << e3.day << '/' << e3.month << '/' << e3.year << endl;
    // output the details of second employee
}