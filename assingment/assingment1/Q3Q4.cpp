#include<iostream>

using namespace std;


int main()
{         
  int n,hot,pleasant,cold;
  cin>>n;
  double sum = 0;
  int arr[n];
  hot = pleasant = cold =0;
  for (int i = 0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i]>=85)
    hot+=1;
    else if(arr[i]>=60&&arr[i]<85)
    pleasant += 1;
    else
    cold+=1;
    sum+= arr[i];
  }
  cout<<"pleasant days:"<<pleasant<<endl;
  cout<<"hot days:"<<hot<<endl;
  cout<<"cold days:"<<cold<<endl;
  cout<<"the avg temp is:"<<sum/n<<endl;
}