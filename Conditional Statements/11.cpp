// triangle pattern 3
#include<iostream>
using namespace std;
int main ()
{
    int n;
    int cnt=1;
    cin>>n;
    int i=1,j=1;
    while(i<=n)
    {
        while(j<=i)
        {
            cout<<" "<<cnt;
            j++;
            cnt++;
        }
        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}