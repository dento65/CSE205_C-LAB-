#include<iostream>

using namespace std;

int main()
{
  int n,arrangements=1;
  cout<<"enter the no of guests: ";
  cin >> n;
  for(int i = n;i>2;i--)
    arrangements*=i;
  cout<<"the no of guests can arrange themselves at the table: "<<arrangements;
}