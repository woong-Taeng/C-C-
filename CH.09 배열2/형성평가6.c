#include <stdio.h>

int main() {
    int a[5][7] = {0};
    a[0][1] = 1;
    a[0][3] = 1;
    a[0][5] = 1;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j <= 5; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}