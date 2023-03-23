#include <stdio.h>
int main()
{
    int a, b, *c, *d, sum,sub,multiply;
    
    printf("Enter two integers \n");
    scanf("%d%d", &a, &b);
    
    c = &a;
    d = &b;

    sum = *c + *d;
    
    sub = *c - *d;
 multiply = *c ** d;   
    printf("Sum of entered numbers = %d\n",sum);
    printf("Difference of entered numbers = %d\n",sub);
    printf("Product of entered numbers = %d\n",multiply);
    return 0;
}
