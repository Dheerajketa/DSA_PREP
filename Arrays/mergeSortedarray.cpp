#include<iostream>
using namespace std;
int main()
{
    int a[]={1,3,4,5,6};
    int b[]={1,2};
    int c[100],count=0;
    int ai=5,bi=2,i=0,j=0;
    while(i<ai&&j<bi)
    {
        if(a[i]<=b[j])
        {
            c[count++]=a[i++];
        }
        else
        {
            c[count++]=b[j++];
        }

    }
    while (i < ai) {
        c[count++] = a[i++];
    }
    while (j < bi) {
        c[count++] = b[j++];
    }
    for(i=0;i<count;i++)
    {
        cout<<c[i]<<" ";
    }

}

