#include <stdio.h>

int main(void)
{
    int n, score, i;
    int sum = 0;
    double avg;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &score);
        sum += score;
    }

    avg = (double)sum / n;

    printf("avg : %.1f\n", avg);

    if (avg >= 80)
        printf("pass\n");
    else
        printf("fail\n");

    return 0;
}