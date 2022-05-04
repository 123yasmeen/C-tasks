#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={1,2,3,4};
    int b[]={5,6,7,8};
    printf("the scalar multiplication: %d",scalar(a,b));
    return 0;
}
int scalar(int a[],int b[])
{
    int i,p=0;
    for(i=0;i<4;i++)
    {
       p+=a[i]*b[i];
    }
    return p;
}
