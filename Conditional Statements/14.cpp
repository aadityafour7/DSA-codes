// triangle pattern using alphabets 2
#include<iostream>
using namespace std;
int main ()
{
    int n;
    char ch=65;
    cin>>n;
    int i=1,j=1;
    while(i<=n)
    {
        while(j<=n)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }
        j=1;
        cout<<endl;
        i++;
    }
    return 0;
}