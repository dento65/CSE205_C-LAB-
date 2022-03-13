#include <iostream>

using namespace std;

struct money
{
    float pounds, shel, pence;
};

int main()
{
    money m;
    cout << "Enter the amount in pounds:";
    cin >> m.pounds;
    m.shel = m.pounds * 20;
    m.pence = m.pounds * 240;
    cout << "\nThe amount in pounds is:" << m.pounds;
    cout << "\nthe amount in shellings is:" << m.shel;
    cout << "\nthe amount in pence is" << m.pence;
}