#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10; 
    }

    cout << "The sum of the digits of " << n << " is " << sum << endl;

    return 0;
}
