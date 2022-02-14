#include<iostream>

using namespace std;

int f(int x) // this recursive func generates the sum of 2's x times OR simply returns(2*x)
{
    if (x == 0)
        return 0;
    else
        return(f(x-1)+2);
}
int main()
{
    cout<<f(3);
}
