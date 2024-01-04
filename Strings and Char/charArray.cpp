// character array
#include<iostream>
using namespace std;
int main ()
{
    int cnt=0;
    char name[20];
    cout<<"Enter your name\n";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    for(int i=0;name[i]!=0;i++)
    {
        cnt++;
    }
    cout<<"Length of character array is "<<cnt;
    return 0;
}