#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        int ch = 65;
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%c", ch++);
        }
        printf("\n");
    }
    for (i = n - 1; i > 0; i--) {
        int ch = 65;
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%c", ch++);
        }
        printf("\n");
    }

    return 0;
}
