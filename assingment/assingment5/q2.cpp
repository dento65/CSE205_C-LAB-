#include <iostream>
using namespace std;

class employee // base class
{
private:
    string name;
    long int number;

public:
    void getd()

    {
        cout << "enter the name :";
        cin >> name;
        cout << "enter the number :";
        cin >> number;
    }
    void showd() const
    {
        cout << "\nthe name is : " << name;
        cout << "\nthe number is : " << number;
    }
};

class scientist : public employee //scientist class is a derived class
{
private:
    int publication;

public:
    void getd()
    {
        employee::getd();
        cout << " Enter number of publications :";
        cin >> publication;
    }
    void putd() const
    {
        employee::showd();
        cout << "\nthe number of publications are : " << publication;
    }
};

class laborer : public employee //laborer class is a derived class
{
};

int main()
{
    scientist s1;
    s1.getd();
    s1.putd();
}