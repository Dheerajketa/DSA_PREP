#include <stdio.h>

int main() {
    char days[100][10]={"sunday","monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int n;
    scanf("%d",&n);
    if(n>0&&n<=7)
    printf("The given day is %s",days[n-1]);
    else
    printf("Please enter a number between 1 and 7");
    return 0;
}