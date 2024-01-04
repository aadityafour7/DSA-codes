#include<iostream>
using namespace std;
void update(int& a)
{
    a++;
    cout<<a<<endl;
}
int main()
{
    int a=3;
    update(a);
    cout<<a<<endl;
    return 0;
}   