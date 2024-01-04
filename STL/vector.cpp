#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(1);
    cout<<"Capacity -> "<<a.capacity()<<endl;
    a.push_back(2);
    cout<<"Capacity -> "<<a.capacity()<<endl;
    a.push_back(3);
    cout<<"Capacity -> "<<a.capacity()<<endl;         // vector doubles its size if it gets filled 
    cout<<"Size -> "<<a.size()<<endl;
}