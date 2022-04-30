#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter 3 numbers\n");
    scanf("%d",&x);
    int a =x%10;
    int b=(x/10)%10;
    int c=(x/100)%10;
    printf("%d%d%d",a,b,c);
    return 0;
}
