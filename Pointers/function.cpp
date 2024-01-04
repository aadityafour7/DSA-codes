#include<bits/stdc++.h>
using namespace std;
void print(int *p)
{
    cout<<p<<endl;
    cout<<*p<<endl;
}
int main()
{
    int ab=10;
    int *p=&ab;
    print(p);

}