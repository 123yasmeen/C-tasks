#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,size,element,i;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter 0 for ascending and 1 for descending\n");
    scanf("%d",&n);
    if(n==0)
     {
        for(i=0;i<size;i++)
        {
            int j;
            for(j=i+1;j<size;j++)
            {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            }
        }
        printf("*\n");

        for (i = 0; i < size; i++)
            {
              printf("%d\n", arr[i]);
            }
     }
     if(n==1)
     {
        for(i=0;i<size;i++)
        {
            int j;
            for(j=i+1;j<size;j++)
            {
            if(arr[i]<arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            }
        }
           printf("*\n");
        for (i = 0; i < size; i++)
            {
              printf("%d\n", arr[i]);
            }
     }
    return 0;
}
