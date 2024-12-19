#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array:";
    cin>>n;
    int a[n];
    int lsum=0,rsum=0,eq;
    cout<<"Enter array Elements : ";
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int k=0;k<n;k++)
    {
        for(int i=k;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            cout<<a[j];
            cout<<endl;
        }
        cout<<endl;
    }
    
    

}
