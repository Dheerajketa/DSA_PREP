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
void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap)
            return;

    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    int n=5;
    cout<<"Before sorting"<<endl;
    print(a,n);
    bubbleSort(a,n);
    cout<<"After sorting"<<endl;
    print(a,n);

}