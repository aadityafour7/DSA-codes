// Arithmetic Progression
#include<iostream>
using namespace std;
int nThTerm(int n)
{
    int ans=(3*n)+7;
    return ans;
}
int main ()
{
    int a;
    cout<<"Enter nth term"<<endl;
    cin>>a;
    cout<<"nth Term is "<<nThTerm(a)<<endl;
    return 0;
}