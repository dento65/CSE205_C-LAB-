#include<iostream>


using namespace std;

int main()
{
  int n,largest,smallest,sum;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++)
    cin>>arr[i];
    sum =0;
  largest = smallest = arr[0];
  for(int i = 0;i<n;i++)
  {
    if(arr[i]>largest)
       largest = arr[i];
    if(arr[i]<smallest)
      smallest = arr[i];
    sum+=arr[i];
  }
  cout<<"largest no is:"<<largest<<endl;
  cout<<"smallest no is:"<<smallest<<endl;
  cout<<"the avg is:"<<sum/n;

}