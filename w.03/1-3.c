#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("the maximum number: %d",getmax(x,y));
    return 0;
}
int getmax(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;

}
