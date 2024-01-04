// triangle pattern using alphabets 3
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
        while(j<=i)
        {
            cout<<ch<<" ";
            j++;
        }
        ch++;
        j=1;
        cout<<endl;
        i++;
    }
    return 0;
}