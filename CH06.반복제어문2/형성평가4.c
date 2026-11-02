#include <stdio.h>

int main(void)
{
    int n, num, i;
    int sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    printf("%.2f\n", (double)sum / n);

    return 0;
}