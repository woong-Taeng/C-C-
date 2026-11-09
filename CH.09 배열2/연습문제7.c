#include <stdio.h>

int main() {
    int a[5][6] = {0};
    a[0][1] = 1;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j <= i + 1; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= i + 1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}