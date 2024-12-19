#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter size of array:";
    cin>>n;
    int even=0,odd=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<odd<<" odd numbers and "<<even<<" even numbers in array.";
    

}