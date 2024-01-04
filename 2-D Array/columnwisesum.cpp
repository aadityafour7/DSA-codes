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
    int sum=0;
    cout<<"Column wise sum is\n";
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            sum=sum+arr[i][j];
        }
        cout<<" "<<sum;
        sum=0;
    }
    return 0;
}