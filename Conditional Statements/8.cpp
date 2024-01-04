// number pattern 2
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int i=1,j=1,cnt=1;
    while(i<=n)
    {
        while(j<=n)
        {
            cout<<" "<<cnt;
            cnt++;
            j++;
        }
        j=1;
        cout<<endl;
        i++;
    }
    return 0;
}