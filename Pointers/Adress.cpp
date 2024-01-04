#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter the value\n";
    cin>>num;
    cout<<"Value of num is "<<num<<endl;
    cout<<"Address of num is "<<&num<<endl;
    int *ptr=&num;      // ptr stores address of num

    cout<<"Address of num is "<<ptr<<endl;
    cout<<"Value at ptr is "<<*ptr<<endl;
    cout<<"Address of ptr is "<<&ptr<<endl;
    return 0;
}   