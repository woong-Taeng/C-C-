#include <stdio.h>

int main(void)
{
    int num, i;
    int count = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0)
            count++;
    }

    printf("Even numbers = %d\n", count);

    return 0;
}