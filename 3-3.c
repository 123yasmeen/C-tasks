#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    printf("the number of digits:%d",nofdigits(x));
    return 0;
}
int nofdigits(int x)
{
    int count=0;

    while(x!=0)
    {   x=x/10;
        count++;
    }
    return count;
}
