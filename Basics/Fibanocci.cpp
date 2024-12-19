#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter n1 and n2 : ";
    cin>>n1>>n2;
    int n,next;
    cout<<"Enter the range : ";
    cin>>n;
    cout<<n1<<"\n"<<n2<<"\n";
    for(int i=0;i<n;i++)
    {
        next=n1+n2;
        cout<<next<<endl;
        n1=n2;
        n2=next;

    }
}