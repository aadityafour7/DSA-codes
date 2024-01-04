#include<iostream>
using namespace std;
int main ()
{
    int arr[4];
    cout<<"Address of array is "<<arr<<endl;
    cout<<"Enter array elements\n";
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nArray is \n";
    for(int i=0;i<4;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<"\nAfter incrementing the values by 1\n";
    for(int i=0;i<4;i++)
    {
        cout<<*(arr+i)+1<<" ";     //arr[i]==*(arr+i)
    }

    return 0;
}