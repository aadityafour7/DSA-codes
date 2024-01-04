//bubble sort
// space complexity O(1)
// time complexity O(n*n)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //bubble sort
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted Array\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}