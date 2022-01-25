#include<iostream>


using namespace std;

/*
a row arr is of format
[id ][hourlywage] [hours] [pay]
*/
int main()
{
  int n;
  float hours,hwage,pay;
  hours = hwage = pay =0;
  cout<<"enter the no of employees";
  cin>>n;
  float arr[n][4];
  for(int i = 0;i<n;i++)
  {
    cout<<" enter id , hourly wage, hours worked (weekly): ";
    cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    hwage = arr[i][1];
    hours = arr[i][2];
    if(hours<=40)
    pay = hwage*hours;
    else
    pay = hwage*40 + (hours-40)*(hwage/2);
  
    pay-= (0.03625*pay);
    arr[i][3]= pay;
    cout<<arr[i][3]<<endl;
  }
  for(int i = 0;i<n;i++)
  {
    cout<<arr[i][0]<<"id employees pay is"<<arr[i][3]<<endl;
  }

}