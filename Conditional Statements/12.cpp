// triangle pattern 4
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
        int val=i;
        while(j<=i)
        {
            cout<<" "<<val;
            j++;
            val--;
        }
        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}