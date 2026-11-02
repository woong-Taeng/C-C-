#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b && a>c)
    printf("max = %d", a);
    
    else if(a<b && b>c)
    printf("max = %d", b);
    
    else 
    printf("max = %d", c);

    return 0;
    
    
}
