#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array:";
    cin>>n;
    int a[n];
    int con=0,max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        con=0;
        else
        {
            con++;
        }
        if(con>max)
        max=con;
    }
    cout<<max;
}
