#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int as=65;
        for(int j=0;j<i;j++)
        cout<<" ";
        for(int k=i;k<n;k++)
        printf("%c",as++);
        cout<<endl;
    }
}
/*

ABCDE
 ABCD
  ABC
   AB
    A
    
*/