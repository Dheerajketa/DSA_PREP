#include <stdio.h>

int main() {
    int n, i, j, k, num;
    printf("Enter n : ");
    scanf("%d", &n);

    num=1;

    for (i=1;i<=n;i++) {
        for (j=i;j<n;j++) {
            printf(" ");
        }
        for (k=1;k<=i;k++) {
            printf("%d", num++);
        }
        num-=2;
        for(k=1;k<i;k++) {
            printf("%d",num--);
        }
        num=i+1;
        printf("\n");
    }

    return 0;
}
