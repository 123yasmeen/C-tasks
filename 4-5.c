#include <stdio.h>
#include <stdlib.h>
void swap(int *p, int *q);
void bubbleSort(int arr[]);
int main()
{
    int arr[] = {1,6,4,8,0,3,2};
    bubbleSort(arr);
    printf("Sorted array: \n");
    int i;
   for (i=0; i < 7; i++)
   printf("%d ", arr[i]);
    return 0;
}
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void bubbleSort(int arr[])
{
   int i, j;
   for (i = 0; i < 7; i++)
   {
       for (j = 0; j < 7-i; j++)
       {
           if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
       }
   }
}
