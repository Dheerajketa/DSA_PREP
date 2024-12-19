#include<iostream>
using namespace std;
int main()
{
    int a[]={1,61,26,34};
    int max=0;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    int smax=0;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]>smax&&a[i]<max)
        smax=a[i];
    }
    cout<<"Second largest in array is "<<smax;

}

