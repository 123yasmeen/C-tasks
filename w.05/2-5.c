#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter two variables\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("the sum:%d",add(&x,&y));
    return 0;
}
int add(int *p1,int *p2)
{
    return *p1+*p2;
}
