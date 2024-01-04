#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[3][3];
    cout<<"Enter matrix elements\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nEntered matrix is \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}