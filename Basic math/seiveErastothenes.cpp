// algorithm to find primes


//Given an integer n, return the number of prime numbers that are strictly less than n



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter number\n"; 
    cin>>n;
    int cnt=0;
    vector<bool> prime(n+1,true);  // assume all numbers as prime
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            cnt++;
            for(int j=2*i;j<n;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
    cout<<"Number of primes is "<<cnt;
    return 0;
}