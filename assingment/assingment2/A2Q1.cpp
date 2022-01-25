
#include <iostream>

using namespace std;

int main()
{
    float designation,total_purchase;//1 for teacher 0 for student;
    cout<<"enter 1 if teacher else enter 0: ";
    cin >> designation;
    cout<<"enter the total purchase : ";
    cin>>total_purchase;
    if(1) // for the teacher
    {
        if(total_purchase>100.0)
            total_purchase -= total_purchase*0.12;
        else
            total_purchase -= total_purchase*0.1;
    }
    total_purchase += total_purchase*0.05;
    cout<<total_purchase<<endl;
}
