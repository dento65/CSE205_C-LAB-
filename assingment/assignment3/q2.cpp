#include <iostream>

using namespace std;

struct point{
    float x,y;
};
int main()
{
    point p1,p2,pf;
    cout<<"Enter the the x and y coordinates for the 1st point: ";
    cin >>p1.x>>p1.y;
    cout<<"Enter the the x and y coordinates for the 2nd point: ";
    cin >>p2.x>>p2.y;
    pf.x = p1.x + p2.x;
    pf.y = p1.y + p2.y;
    cout<<"Coordinates of p1+p2 are:"<< pf.x<<','<<pf.y;
}