#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x,y;
  printf("enter the first number\n");
  scanf("%d",&x);
  printf("enter the second number\n");
  scanf("%d",&y);
  printf("using the arithmetic operators:\n");
  printf("the multiplication of the numbers= %d\n",x*y);
  printf("the division of the numbers= %d\n",x/y);
  printf("the addition of the numbers= %d\n",x+y);
  printf("the modulus of the numbers= %d\n",x%y);
  printf("using the logical operators:\n");
  printf("x&&y=%d\n",x&&y);
  printf("x||y=%d\n",x||y);
  printf("!x=%d\n",!x);
  printf("using bitwise operators");
  printf("x&y:%d\n",x&y);
  printf("x|y:%d\n",x|y);
  printf("x^y:%d\n",x^y);
  printf("~x:%d\n",~x);
  printf("~y:%d\n",~y);
    return 0;
}
