#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    
    cout<<"Enter range as a and b : ";
    cin>>a>>b;
    for(n=a;n<=b;n++)
    {
    int isPrime=1;
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

}
}