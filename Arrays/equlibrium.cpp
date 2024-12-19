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
    for(int i=1;i<n-1;i++)
    {
        lsum=0,rsum=0;
        for(int j=0;j<i;j++)
        lsum+=a[j];
        for(int k=i;k<n;k++)
        rsum+=a[k];
        if(lsum==rsum)
        {
            cout<<a[i]<<" is the eqlibrium";
        break;
        }
    }
    

}
