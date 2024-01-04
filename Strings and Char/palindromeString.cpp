// check if string is palindrome using two pointer
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cout<<"Enter string ";
    cin>>a;
    int cnt=0;
    int b=a.length();
    int s=0;
    int e=b-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
        {
            cnt++;
            break;
        }
        else
        {
            s++;
            e--;
        }
    }
    if(cnt>0)
    {
        cout<<"String is not Palindrome"<<endl;
    }
    else
    {
        cout<<"String is Palindrome\n";
    }
    return 0;
}