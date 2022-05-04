#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u,p;
    login(u,p);
    return 0;
}
void login(int user,int password)
{
    printf("enter your user name\n");
    scanf("%d",&user);
    if(user==159)
    {
     printf("enter your password\n");
     scanf("%d",&password);
        if(password==23456)
        {
             printf("welcome");
        }
        else
        {
            printf("wrong password ,please try again");
        }
    }
    else
    {
        printf("user name not found");
    }
}
