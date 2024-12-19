#include <stdio.h>

int main() {
    int a=10,b=20,c=30;
    if(a>b)
    {
        if(a>c)
        printf("A is bigger");
        else
        printf("C is bigger");
    }
    else
    {
        if(b>c)
        printf("B is Bigger");
        else
        printf("C is bigger");
    }

    return 0;
}