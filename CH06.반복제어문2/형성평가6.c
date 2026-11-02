#include <stdio.h>

int main(void)
{
    int a, b, temp, i;
    int sum = 0, count = 0;

    scanf("%d %d", &a, &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }

    printf("sum : %d\n", sum);
    if (count > 0)
        printf("avg : %.1f\n", (double)sum / count);
    else
        printf("avg : 0.0\n");

    return 0;
}