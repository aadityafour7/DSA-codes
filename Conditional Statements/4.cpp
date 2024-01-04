// to convert the temperature from degree to fahrenheit
#include<iostream>
using namespace std;
int main ()
{
    int d;
    int f;
    float fah,deg;
    cout<<"Enter the temperature in degree celcius "<<endl;
    cin>>d;
    fah=1.8*d + 32;
    cout<<"Temperature in Fahrenheit is "<<fah<<endl;
    cout<<"Enter the temperature in fahrenheit "<<endl;
    cin>>f;
    deg= (f - 32)/1.8;
    cout<<"Temperature in Degree is "<<deg<<endl;
    return 0;
}