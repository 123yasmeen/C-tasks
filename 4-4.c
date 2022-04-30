#include <stdio.h>
#include <stdlib.h>
int main()
{
  int size,i;
  printf("enter the size of the array\n");
  scanf("%d",&size);
  int arr[size];
  printf("enter the elements of the array\n");
  for(i=0;i<size;i++)
  {
      scanf("%d",&arr[i]);
  }
  int x=repeated(arr,size);
  printf("repeated numbers %d",x);
  return 0;
}
int repeated (int arr[], int size)
{
  int i, j;
  for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        return arr[i];
}
