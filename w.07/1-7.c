 #include <stdio.h>
#include <stdlib.h>
struct employee{
    float salary;
    float bonus;
    float deduction;
};
void printtotal(float s,float b,float d)
{
 printf("the total:%f\n",s+b-d);
}
void getinfo(float s,float b,float d)
{
    printf("enter the salary\n");
    scanf("%f",&s);
    printf("enter the bonus\n");
    scanf("%f",&b);
    printf("enter the deduction\n");
    scanf("%f",&d);
  printtotal(s,b,d);

}

int main()
{
    struct employee Mohsen;
    getinfo(Mohsen.salary,Mohsen.bonus,Mohsen.deduction);
    struct employee Maged;
    getinfo(Maged.salary,Maged.bonus,Maged.deduction);
    struct employee Mariam;
    getinfo(Mariam.salary,Mariam.bonus,Mariam.deduction);
    return 0;
}
