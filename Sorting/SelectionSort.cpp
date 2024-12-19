#include<iostream>
using namespace std;
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minIdx])
            {
                minIdx=j;
            }
        }
        swap(a[i],a[minIdx]);
    }
}
int main()
{
    int a[5]={5,4,1,3,2};
    int n=5;
    cout<<"Before sorting"<<endl;
    print(a,n);
    selectionSort(a,n);
    cout<<"After sorting"<<endl;
    print(a,n);
}