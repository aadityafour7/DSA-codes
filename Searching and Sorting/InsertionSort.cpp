// insertion sort
// space complexity O(1)
// time complexity O(n*n)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main ()
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
    //insertion sort
    for(int i=1;i<n;i++)    // assumed that 1st element is sorted
    {
        int tmp=arr[i];
        int j=i-1;      // comparing the elements that are before i
        for(;j>=0;j--)
        {
            if(arr[j]>tmp)
            {
                //shifting the element ahead
                arr[j+1]=arr[j];
            }
            else
            {
                // do nothing
                break;
            }
        }
        arr[j+1]=tmp;
    }
    cout<<"Array after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}