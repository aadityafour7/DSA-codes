// triangle pattern using alphabets
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int i=1,j=1;
    char ch=65;
    while(i<=n)
    {
        while(j<=n)
        {
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        j=1;
        ch++;
        i++;
    }
    return 0;
}