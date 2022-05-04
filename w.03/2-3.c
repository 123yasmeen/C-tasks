#include <stdio.h>
#include <stdlib.h>
int x;
int y;
int main()
{
   x = 10;
   y = 20;
    printf("x=%d, y=%d\n", x, y);
    fun(&x, &y);
    printf("x=%d, y=%d\n", x, y);

    return 0;
}
void fun(int *x, int *y)
{
    *x=20;
    *y=10;
}
