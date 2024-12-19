#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array:";
    cin>>n;
    int a[n];
    int max=0;
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        max=a[i];
    }
    cout<<max<<" is largest number in array";
    
}