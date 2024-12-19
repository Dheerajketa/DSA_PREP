#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array:";
    cin>>n;
    int a[n],arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=0){
            arr[count]=a[i];
            count++;
        }
    }
    for(int i=count;i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
