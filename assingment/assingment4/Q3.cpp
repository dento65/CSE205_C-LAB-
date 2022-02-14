
#include<iostream>

using namespace std;

int f(string s,int l) // func to count the no of vowels in the string
{
    int check = 0;
    if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u') // checks whether the charc in string is vowel
        check = 1;
    if (l < 0) //base case of function
        return 0;
    else
        return(f(s,l-1) + check);
}

int main()
{
    cout<<f("aekij",4);//f(string,length-1)
}
