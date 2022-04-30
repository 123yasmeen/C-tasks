#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
   int result=a>b?a:(b>c?b:c);
   printf("the maximum number: %d",result);
    return 0;
}
