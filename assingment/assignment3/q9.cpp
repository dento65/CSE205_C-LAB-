#include <iostream>

using namespace std;

struct timee
{
    int sec, min, hour;
};

int main()
{
    timee t1;
    long total_seconds;
    cout << "Enter the time (i.e: 12 10 35 ) in hour, min and sec : ";
    cin >> t1.hour >> t1.min >> t1.sec;
    total_seconds = t1.hour * 3600 + t1.min * 60 + t1.sec;
    cout << "\nTotal number of seconds from when midnight till now are:" << total_seconds;
}