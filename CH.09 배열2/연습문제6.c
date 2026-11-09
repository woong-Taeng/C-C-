#include <stdio.h>

int main() {
    int a[4][4] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            a[i][3] += a[i][j];
            a[3][j] += a[i][j];
            a[3][3] += a[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}