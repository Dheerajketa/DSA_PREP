#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter N : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                printf("%c", 'a' + i - 1);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = n - 1; i > 0; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                printf("%c", 'a' + i - 1);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
