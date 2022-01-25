#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  double largest,smallest,sumofsquares,sum,sd,range;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++)
    cin>>arr[i];
    sum = sumofsquares = 0;
  largest = smallest = arr[0];
  for(int i = 0;i<n;i++)
  {
    if(arr[i]>largest)
       largest = arr[i];
    if(arr[i]<smallest)
      smallest = arr[i];
    sum+=arr[i];
    arr[i]=arr[i]*arr[i]; // squaring each element
    sumofsquares+=arr[i];
  }
  range = largest - smallest;
  sd = sqrt(abs((sumofsquares/(double)n) - (sum/(double)n)*(sum/(double)n)));
  cout<<"the range is :"<<range<<endl;
  cout<<"the standard deviation is"<<sd;
 
}