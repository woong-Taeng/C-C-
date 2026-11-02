#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    switch (n) {
        case 1: printf("dog"); break;
        case 2: printf("cat"); break;
        case 3: printf("chick"); break;
        default: printf("blank");
    }

    return 0;
}