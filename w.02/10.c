#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,password;
    printf("enter your id\n");
    scanf("%d",&id);
  if(id==1234)
  {

      int i;
      for(i=0;i<3;i++)
      {
          printf("enter your password\n");
          scanf("%d",&password);
          if(password!=3087)
            {
              printf("you are not registered\n");

            }
          else
          {
            printf("welcome\n");
          break;
          }
          if(i==2)
              {
                  printf("No more tries\n");
                  break;
              }
      }

  }
    return 0;
}
