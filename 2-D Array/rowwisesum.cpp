#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    int sum=0;
    cout<<"Enter the matrix elements\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Row wise sum is \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<" "<<sum;
        sum=0;
    }
    return 0;
}