#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"enter the height of pyramid: ";
  cin>>n;
  for(int i = 1;i <= n;i++)
  {
    for(int j= n - i;j < n;j++)
      cout<<'X';
    cout<<endl;
  }
}