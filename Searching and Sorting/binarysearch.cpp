// Binary search
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
        int first=0,end=n-1;
        int mid=first + (end-first)/2;  // to overcome bound limits(constraints )
        while(first<=end)
        {
            if(key==arr[mid])
            {
                return mid;
            }
            
            if(arr[mid]<key)
            {
                first = mid +1;
            }
            else
            {
                end = mid - 1;
            }
            mid=(first+end)/2;
        }
        return -1;
}
int main ()
{
    int arr[7]={1,2,3,4,5,6,7};
    int ans=BinarySearch(arr,7,4);
    cout<<"Index of 4 is "<<ans;
    return 0;
}