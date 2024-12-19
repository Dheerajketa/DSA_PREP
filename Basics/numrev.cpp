#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n;
    while(n>0)
    {
        int rem=n%10;
        cout<<rem<<" ";
        n/=10;
    }

    return 0;
}