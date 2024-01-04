// map
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int,int> a;
    a[1]=3;
    a[65]=21;
    a[56]=4;
    a[3]=6;
    a[6]=2;
    a.insert({10,1});
    cout<<"Print map elements\n";
    for(auto ip:a)
    {
        cout<<"Key -> "<<ip.first<<" Frequency -> "<<ip.second<<endl;
    }
}