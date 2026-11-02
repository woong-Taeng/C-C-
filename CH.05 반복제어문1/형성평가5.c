#include <stdio.h>

int main(void)
{
    int base, height;
    char ch;

    do {
        scanf("%d %d", &base, &height);
        printf("Triangle area = %.1f\n", base * height / 2.0);
        printf("Continue? ");
        scanf(" %c", &ch);   // %c 앞 공백: 남은 엔터를 건너뜀
    } while (ch == 'Y' || ch == 'y');

    return 0;
}