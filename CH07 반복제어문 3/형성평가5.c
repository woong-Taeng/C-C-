#include <stdio.h>

int main(void)
{
    int n, i, j;
    char ch = 'A';
    int num = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("%c ", ch);
            ch++;
        }
        for (j = 0; j < i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}