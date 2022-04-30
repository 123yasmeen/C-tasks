#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =10;
    printf("%d\n",x);
    int *p=&x;
    *p=20;
    printf("%d\n",x);
    return 0;
}
