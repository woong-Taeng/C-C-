#include <stdio.h>

int main() {
    int a[5][4];
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        int r = (sum * 10 + 2) / 4;
        printf("%d %d.%d\n", sum, r / 10, r % 10);
    }
    return 0;
}