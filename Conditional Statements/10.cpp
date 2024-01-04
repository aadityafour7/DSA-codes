// triangle pattern 2
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int i=1,j=1;
    while(i<=n)
    {
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}