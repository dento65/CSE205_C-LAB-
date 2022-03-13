#include <iostream>

using namespace std;

int main()
{
    char c;
    enum etype
    {
        laborer = 'l',
        accountant = 'a',
        excutive = 'e',
        researcher = 'r',
        secretary = 's',
        manager = 'm'
    };
    //
    cout << "Enter the first letter of the employee: ";
    cin >> c;
    switch (c)
    {
    case manager:
        cout << "Employee is a Manager";
        break;
    case accountant:
        cout << "Employee is a accountant";
        break;
    case excutive:
        cout << "Employee is a excutive";
        break;
    case laborer:
        cout << "Employee is a laborer";
        break;
    case secretary:
        cout << "Employee is a secretary";
        break;
    case researcher:
        cout << "Employee type is researcher";
        break;
    default:
        cout << "Invalid input";
        break;
    }
}