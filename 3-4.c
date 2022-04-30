#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,j,c;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            c=0;
            if(arr[i]==arr[j])
            {
                c=1;
                break;
            }

        }
        if(c==0)
            printf("%d",arr[i]);

    }
    return 0;
}
