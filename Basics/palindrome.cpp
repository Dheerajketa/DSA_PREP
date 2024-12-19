#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int t=x;
        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
    cout<<reversed;
    if((x == reversed) || (x == reversed / 10));
    cout<<x<<endl<<reversed;
}