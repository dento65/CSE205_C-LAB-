#include <iostream>

using namespace std;

struct phone{
    int area_code, exchange, no;
};
int main()
{
    cout<<"Enter the the area code,the exchange,and the number : ";
    phone p1,p2;
    p2.area_code = 212;
    p2.exchange = 767;
    p2.no = 8900;
    cin>>p1.area_code>>p1.exchange>>p1.no;
    cout<<"My number is: "<<'('<<p2.area_code<<") "<<p2.exchange<<'-'<<p2.no<<endl;
    cout<<"Your number is: "<<'('<<p1.area_code<<") "<<p1.exchange<<'-'<<p1.no<<endl;
}
