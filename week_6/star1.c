#include <stdio.h>

int main()
{
    // 증가
    int i, j;
    for (i=1; i<=4; i++) 
    {
        for (j=1; j<i; j++ )
        {
            printf("*");
        }
        printf("\n");
    }

    // 감소
    for (int i =2; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}