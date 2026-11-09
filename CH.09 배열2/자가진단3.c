#include <stdio.h>

int main() {
    int a[100];
    int n = 2;
    a[0] = 100;
    scanf("%d", &a[1]);
    printf("%d %d ", a[0], a[1]);
    while (1) {
        a[n] = a[n - 2] - a[n - 1];
        printf("%d ", a[n]);
        if (a[n] < 0) break;
        n++;
    }
    return 0;
}