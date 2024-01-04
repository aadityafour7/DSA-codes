// priority queue
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> max;   // max heap
    priority_queue<int, vector<int>, greater<int>> min;   // min heap
    max.push(4);
    max.push(2);
    max.push(1);
    max.push(8);
    int a=max.size();
    cout<<"Max heap\n";
    for(int i=0;i<a;i++)
    {
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<"\n";
    min.push(6);
    min.push(1);
    min.push(0);
    min.push(16);
    min.push(5);
    int b=min.size();
    cout<<"Min heap\n";
    for(int i=0;i<b;i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<"\n";
}