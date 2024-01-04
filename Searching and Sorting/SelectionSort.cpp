// Selection sort 
// space complexity O(1)
// time complexity O(n*n)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main ()
{
    int arr[5];
    int min;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i++)
    {
        min=i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}