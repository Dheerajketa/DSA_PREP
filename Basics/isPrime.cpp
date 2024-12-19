#include<iostream>
using namespace std;
int main()
{
    int n;
    int isPrime=1;
    cout<<"Enter n:";
    cin>>n;
    if(n<1)
    isPrime=0;
    else
    {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime)
    cout<<n<<" is a prime number"<<endl;
    else
    cout<<n<<" is not a prime number"<<endl;

}