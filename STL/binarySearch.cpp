#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(3);
    a.push_back(9);
    a.push_back(2);
    a.push_back(7);
    a.push_back(4);
    cout<<"Search for 5 -> "<<binary_search(a.begin(),a.end(),5);
   cout<<"\nLower bound of 9 -> "<<lower_bound(a.begin(),a.end(),9)-a.begin();
   cout<<"\nUpper bound of 9 -> "<<upper_bound(a.begin(),a.end(),9)-a.begin();

}