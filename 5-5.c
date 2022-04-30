#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x=10,y=29,z=32;
  int*px,*py,*pz;
  px=&x;
  py=&y;
  pz=&z;
  printf(" x=%d\n y=%d\n z=%d\n px=%d\n py=%d\n pz=%d\n *px=%d\n *py=%d\n *pz=%d\n",x,y,z,px,py,pz,*px,*py,*pz);
  printf("swapping pointers");
  pz=px;
  px=py;
  py=pz;/*swapping the address only*/
  printf(" x=%d\n y=%d\n z=%d\n px=%d\n py=%d\n pz=%d\n *px=%d\n *py=%d\n *pz=%d\n",x,y,z,px,py,pz,*px,*py,*pz);

    return 0;
}
