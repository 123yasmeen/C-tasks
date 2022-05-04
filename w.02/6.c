#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    while(x>0)
    {
       printf("enter the result of 3*4\n");
        scanf("%d",&x);
        if(x!=12)
            printf("Try again\n");
        else
        {
            printf("Thanks\n");
        break;
        }

    }
    return 0;
}
