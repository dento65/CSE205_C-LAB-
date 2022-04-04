#include <iostream>

using namespace std;

class time1
{
private:
    int hrs, min;
    string c; //stores am or pm for 12 hour case
public:
    time1() : hrs(0), min(0), c("") {}
    time1(int h) : hrs(h / 60), min(h % 60), c("")
    {
    }
    time1(int h, string s) : hrs(h / 60), min(h % 60), c(s)
    {
    }
    void gettime()
    {
        if (c == "AM" || c == "PM")
        {
            if (hrs >= 12)
                hrs = hrs % 12;
            cout << "the time in 12 hour format is:   " << hrs << ':' << min << " " << c;
        }
        else
            cout << "the time in 24 hour format is:    " << hrs << ':' << min;
    }
    void convert24(time1 t)
    {
        if (t.c == "AM")
        {
            hrs = t.hrs;
            min = t.min;
            c = "";
        }
        else if (t.c == "PM")
        {
            hrs = 12 + t.hrs;
            min = t.min;
            c = "";
        }
    }
    void convert12(time1 t)
    {
        if (t.hrs >= 12)
            c = "PM";
        else
            c = "AM";
        hrs = t.hrs % 12;
        min = t.min;
    }
};
int main()
{
    int b, h;
    string s;
    cout << "enter 1 for 12 hour format 0 for 24 hour format : ";
    cin >> b;
    if (b)
    {
        cout << "enter the no of min since midnight : ";
        cin >> h;
        cout << "enter wether it is AM or PM :  "; //it is only for diffrentiating in 12 and 24 hour format
        cin >> s;
        time1 t(h, s);
        t.gettime();
    }
    else
    {
        cout << "enter the no of min since midnight : ";
        cin >> h;
        time1 t(h);
    }
}
