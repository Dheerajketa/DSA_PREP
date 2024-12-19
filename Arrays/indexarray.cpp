#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array size : ";
    cin>>n;
    int a[n],ind[n];
    cout<<"Enter array Elements : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter index values between 0 and "<<n<<" : ";
    for(int i=0;i<n;i++)
    cin>>ind[i];
    int res[n];
    for(int i=0;i<n;i++)
    {
        res[i]=a[ind[i]];
    }
    cout<<"result : ";
    for(int i=0;i<n;i++)
    cout<<res[i]<<" ";

}