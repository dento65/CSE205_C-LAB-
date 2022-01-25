#include <iostream>

using namespace std;

int main()
{
    float x,y;
    cout<<"enter the x coordinate then the y coordinate both non zero\n";
    cin>>x>>y;
    if(x>0)
    {
        if(y>0)
            cout<<"1st Quadrant\n";
        else
            cout<<"4th Quadrant\n";
    }
    else
    {
        if(y>0)
            cout<<"2nd Quadrant\n";
        else
            cout<<"3rd Quadrant\n";
    }
        
}
