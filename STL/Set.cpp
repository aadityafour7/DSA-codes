// set uses bst
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(4);
    s.insert(1);
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(0);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(9);
    for(auto ip:s)
    {
        cout<<ip<<" ";
    }
    cout<<"\nErase first\n";
    s.erase(s.begin());
      for(auto ip:s)
    {
        cout<<ip<<" ";
    }
    cout<<"Check whether 5 is present -> "<<s.count(5);
    cout<<"\nCheck whether -5 is present -> "<<s.count(-5);


}