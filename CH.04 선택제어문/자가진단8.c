#include <stdio.h>

int main(void) {
    double grade;
    scanf("%lf", &grade);

    if (grade >= 4.0) printf("scholarship");
    else if (grade >= 3.0) printf("next semester");
    else if (grade >= 2.0) printf("seasonal semester");
    else printf("retake");

    return 0;
}