#include<iostream>
using namespace std;
int main()
{
    int a[]={-6,-3,-2,-1,1,7,8,9};
    int pos,count=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            pos=i;
            break;
        } 
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        if(i<pos)
        {
            b[count++]=a[i];
        }
        if(pos<n)
        b[count++]=a[pos++];
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}

