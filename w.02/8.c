#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    int i;
    for(i=1;i<=12;i++)
    {
           int m=i*x;
           printf("%d*%d=%d\t\n",i,x,m);
    }
    return 0;
}
