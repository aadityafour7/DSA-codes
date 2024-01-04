//triangle pattern
#include<iostream>
using namespace std;
int main ()
{
    int n;
    int i=1,j=1;
    cin>>n;
    while(i<=n)
    {
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        j=1;
        cout<<endl;
        i++;
    }
    return 0;
}