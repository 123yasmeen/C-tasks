#include <stdio.h>
#include <stdlib.h>
int main()
{
    int d1,d2,d3;
    scanf("%d",&d1);
    scanf("%d",&d2);
    scanf("%d",&d3);
   int total=d1+d2+d3;
   int dpercentage=(total*100)/150;
   printf("total degree:%d%\n",dpercentage);
   if(85<=dpercentage&&100>=dpercentage)
    printf(" A");
   else if (85>dpercentage&&75<=dpercentage)
    printf(" B");
    else if(75>dpercentage&&65<=dpercentage)
        printf(" C");
   else if(65>dpercentage&&50<=dpercentage)
        printf (" D");
   else
        printf("F");
    return 0;
}
