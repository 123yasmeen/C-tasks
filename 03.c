#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,mt;
    printf("enter the amount of money\n");
    scanf("%f",&m);
    mt=m+(5.00/100.00*m);
    printf("the amount of money after adding the tax:%f\$",mt);
    return 0;
}
