#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int t=n;
    int res=1;
    while (n)
    {
        res*=n--;
    }
    cout<<"Factorial of "<<t<<" = "<<res;
}