#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,max1,max2;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max1=arr[0];
    max2=arr[0];
    for(i=0;i<size;i++)
    {
        if(max1<arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
         else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
     printf("max2 = %d", max2);
    return 0;
}
