// duplicate element remove
#include<iostream>
using namespace std;
int main ()

{
    int arr[n];
    cin>>n;

    for(int i=0;i<n;i++)    
        {
            cin>>arr[i];
        }
        cout<<"before removing"<<endl;
            for(int i=0;i<n;i++)
                {
                    cout<<" "<<arr[i];
                }                       
        for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                    {
                        for(int k=j;k<n;k++)
                            {
                                arr[k]=arr[k+1];
                            }
                        n--;
                        j--;
                    }
            }
        cout<<"\nAfter sorting"<<endl;
        for(int k=0;k<arr.size();k++)
        {
            cout<<" "<<arr[k];
        }
        return 0;
}
