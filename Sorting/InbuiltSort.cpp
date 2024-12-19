#include <iostream>
#include <algorithm> 
using namespace std;
void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
int main() {
    int a[5] = {5, 4, 1, 3, 2};
    int n = 5;
    cout << "Before sorting" << endl;
    print(a, n);
    sort(a, a + n);
    cout << "After sorting Ascending" << endl;
    print(a, n);
    sort(a,a+n,greater<int>());
    cout << "After sorting Decending" << endl;
    print(a,n);
    return 0;
}
