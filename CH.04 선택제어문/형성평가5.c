#include <stdio.h>

int main(void) {
    int m;
    scanf("%d", &m);

    switch (m) {
        case 2:
            printf("28");
            break;
        case 4: case 6: case 9: case 11:
            printf("30");
            break;
        default:
            printf("31");
    }

    return 0;
}