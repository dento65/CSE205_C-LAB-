#include <iostream>

using namespace std;

struct timee
{
    int sec, min, hour;
};

int main()
{
    timee t1, t2, ft;
    long total_seconds;
    cout << "Enter the 1st value of time (i.e: 12 10 35 ) in hour, min and sec : ";
    cin >> t1.hour >> t1.min >> t1.sec;
    cout << "\nEnter the 2nd value of time (i.e: 12 10 35 ) in hour, min and sec : ";
    cin >> t2.hour >> t2.min >> t2.sec;
    total_seconds = t1.hour * 3600 + t1.min * 60 + t1.sec + t2.hour * 3600 + t2.min * 60 + t2.sec;
    ft.hour = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    ft.min = total_seconds / 60;
    total_seconds = total_seconds % 60;
    ft.sec = total_seconds;
    cout << "\nThe final time is:" << ft.hour << ':' << ft.min << ':' << ft.sec;
}