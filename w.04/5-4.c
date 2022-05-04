#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5];
    printf("enter the elements of the array\n");
    int i,j,sum=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
         sum=0;
        for(j=0;j<5;j++)
        {
            sum+=arr[i][j];
        }
         printf("sum of rows %d\t",sum);
    }

    for(j=0;j<5;j++)
    {
         sum=0;
        for(i=0;i<5;i++)
        {
            sum+=arr[i][j];
        }
        printf("sum of columns %d\t",sum);
    }

    return 0;
}
