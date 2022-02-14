#include<iostream>

using namespace std;
//to check palindrome
int f(string s,int l,int x)// l and x are the length of the string - 1 and starting index of string
{
    int check = 0;
    if(s[l]==s[x]) // checks whether the charc in string from both sides are the same
        check = 1;
    if(l<=x||check==0)//base case of function
        return check;
    else
        return(f(s,l-1,x+1));
}

int main()
{
    cout<<f("aeea",3,0); //f(string ,length-1,starting index/0)
}