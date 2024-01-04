// reverse a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the string\n";
    cin>>name;
    int a=name.length();
    cout<<"String after reversing \n";
    for(int i=a-1;i>=0;i--)
    {
        cout<<name[i]<<" ";
    }
    return 0;
}