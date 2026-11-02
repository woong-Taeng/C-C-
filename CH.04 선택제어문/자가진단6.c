#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);

    if(a <= 0)
    printf("Non positive");

    else if(a%2==0)
    printf("Even Number");
    
    else
    printf("Odd Number");

    
    return 0;
}

