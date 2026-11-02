#include <stdio.h>

int main(void)
{
    char ch;
    int i;

    scanf("%c", &ch);

    for (i = 0; i < 20; i++)
        printf("%c", ch);

    return 0;
}