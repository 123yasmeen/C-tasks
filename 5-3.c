#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,i;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}
int fib(int x)
{
   if(x==0)
    return 0;
    else if(x==1)
     return 1;
    else
     return (fib(x-1)+fib(x-2));

}
