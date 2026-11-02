#include <stdio.h>

int main(void)
{
    int a, b, i, j, step;

    scanf("%d %d", &a, &b);

    if (a <= b)
        step = 1;
    else
        step = -1;

    for (i = 1; i <= 9; i++) {
        for (j = a; j != b + step; j += step)
            printf("%d * %d = %2d   ", j, i, j * i);
        printf("\n");
    }

    return 0;
}