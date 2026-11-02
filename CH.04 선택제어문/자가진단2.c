#include <stdio.h>

int main()
{
    double a;
    double b;
    

    scanf("%lf %lf", &a, &b);

    double c = b + 100 - a;
    printf("%1.lf\n", c);

    if(c > 0)
    printf("Obesity\nNeed control");

    return 0;
    
}

