#include <stdio.h>
main()
{
   int x,y,*pointer;
   x=22;
   printf("x is %d,y is %d, pointer is %d\n",x,y,*pointer);
   pointer=&x;
   printf("x is %d,y is %d, pointer is %d\n",x,y,&pointer);
   y=*pointer;
   printf("x is %d,y is %d, pointer is %d\n",x,y,*pointer);
}