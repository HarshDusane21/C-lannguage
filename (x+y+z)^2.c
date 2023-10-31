#include<stdio.h>
main()
{
	//(x+y+z)^2=x^2+y^2+z^2+2xy+2yz+2zx
	//(x+y+z)^2=x*x+y*y*z*z+2*x*y+2*y*z+2*z*x
	int x,y,z;
	int sum;
	printf("Enter the value of X :");
	scanf("%d",&x);
	printf("Enter the value of Y :");
	scanf("%d",&y);
	printf("Enter the value of Z :");
	scanf("%d",&z);
   
   
   sum=x*x+y*y*z*z+2*x*y+2*y*z+2*z*x;
   printf("ANSWER=%d",sum);
}
