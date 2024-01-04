// swap two elements
#include<iostream>
using namespace std;
int main ()
{
    int a=0,b=0;
    int arr[6];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements before swapping"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<" "<<arr[i];
    }
    for(int i=0;i<6;i=i+2)
    {
        if(i+1<6)
        {
                arr[i]=a;
                a=arr[i+1];
                arr[i+1]=arr[i];
        }
    }
    cout<<"Array after swapping"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}