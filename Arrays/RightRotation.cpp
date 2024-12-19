#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    
    int i, j = 0;
    int a[n], arr[n];
    int count = 0;
    int shift;

    cout << "Enter shift value: ";
    cin >> shift;
    
    cout << "Enter Array elements: ";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(i=n-shift;i<n;i++)
    arr[count++]=a[i];

    for(i = 0; i < n-shift; i++) {
        arr[count++] = a[i];
    }
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
