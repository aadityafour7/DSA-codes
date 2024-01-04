// find sum of elements in array
#include<iostream>
using namespace std;
int sum(int arr[],int size)
{   
    int sum=0;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array sum is "<<endl;
    for(int i=0;i<size;i++)
    {
        sum=sum + arr[i];
    }
    cout<<sum;1  
    return sum;

}
int main ()
{
    int arr[5];
    cout<<"Enter array elements"<<endl;
    sum(arr,5);
    return 0;
}