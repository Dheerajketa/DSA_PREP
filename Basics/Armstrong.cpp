#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int sum = 0; // Initialize sum variable
    cout << "Enter n: ";
    cin >> n;

    int temp = n;
    int c = 0;

    // Count the number of digits
    while (temp != 0)
    {
        temp /= 10;
        c++;
    }

    temp = n;
    int rem, power, res = 0; 
    while (temp != 0)
    {
        rem = temp % 10;
        power = (int)(pow(rem,c)+0.5);
        res += power;
        temp /= 10;
    }
    if (res == n)
        cout << "The Given number " << n << " is an Armstrong Number";
    else
        cout << "The Given number " << n << " is not an Armstrong Number";

    return 0;
}
