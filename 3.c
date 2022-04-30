#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    printf("enter your id\n");
    scanf("%d",&id);
    switch(id)
    {
        case 1234:printf("Harry\n");
        break;
        case 5678:printf("Roy\n");
        break;
        case 1145:printf("Hermoine\n");
        break;
        default:printf("Wrong ID");
    }
    return 0;
}
