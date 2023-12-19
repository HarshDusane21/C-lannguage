#include<stdio.h>
main()
{
//    (x+y)^2=x^2+2xy+y^2;
   int x,y,z;
   printf("Enter the value x And y : ");
   scanf("%d %d",&x,&y);
   z=x*x+2*x*y+y*y;
   printf("%d",z);
   
}
