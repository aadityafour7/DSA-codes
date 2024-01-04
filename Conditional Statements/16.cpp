// star pattern
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int i=1,j=1;
    while(i<=n)
    {
        while(j<=n)
        {
            if(j<=i)
            cout<<" ";
            else
            cout<<"*";
            j++;
        }
        j=1;
        cout<<endl;
        i++;
    }
    return 0;
}