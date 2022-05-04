#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,sum=0,avg;
    printf("enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x);
        sum+=x;
        avg=sum/10;
    }
    printf("the summation: %d\n",sum);
    printf("the average: %d\n",avg);

    return 0;
}
