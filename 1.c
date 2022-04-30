#include <stdio.h>
#include <stdlib.h>

int main()
{
    int workinghours;
    printf("enter the working hours\n");
    scanf("%d",&workinghours);
    int salary=50*workinghours;
    if(workinghours<=40)
    {
     int deduction=salary-salary*10/100;
     printf("the salary:%d\n",deduction);
    }
    else
    {
       printf("the salary:%d\n",salary);
    }
    return 0;
}
