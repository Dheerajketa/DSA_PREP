#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0||j==n-1||(i==j&&i>=n/2)||(i+j==n-1&&i>=n/2))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }

}
/*

*       *
*       *
*   *   *
* *   * *
*       *

*/