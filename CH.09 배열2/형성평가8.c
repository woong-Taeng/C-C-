#include <stdio.h>

int main() {
    int a[10][11] = {0};
    int n;
    scanf("%d", &n);
    a[0][1] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 1; j <= i + 1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}