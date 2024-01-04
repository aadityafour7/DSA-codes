#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    int *ptr=&arr[0];
    cout<<"For integer array\n";
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*ptr<<endl;

    char ch[4]="abc";
    char *p=&ch[0];
    cout<<"For character array\n";
    cout<<ch<<endl;
    cout<<*ch<<endl;
    cout<<*p<<endl;

    cout<<"cout function behaves differently for char and integer array\n";
    return 0;
}