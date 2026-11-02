#include <stdio.h>

int main(void)
{
    int i, j;
    char ch = 'a';
    int num = 1;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        for (j = 1; j <= 5 - i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}