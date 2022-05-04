#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,fact=1;
    printf("enter a number\n");
    scanf("%d",&x);
    int i=1;
    while(i<=x)
    {
        fact*=i;
        i++;
    }
    printf("the factorial of %d = %d",x,fact);
    return 0;
}
