#include <stdio.h>

int main(void)
{
    int a, b, temp, i;

    scanf("%d %d", &a, &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++)
        printf("%d ", i);

    return 0;
}