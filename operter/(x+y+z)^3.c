#include<stdio.h>
main()
{
	//(x+y+z)^3=x^3 +y^3+z^3+3(x+y)(y+z)(z+x)
	//(x+y+z)^3=x*x*x+y*y*y+z*z*z+3(x+y)(y+z)(z+x)
	int x,y,z;
	int sum;
	printf("Enter the value of X :");
	scanf("%d",&x);
	printf("Enter the value of Y :");
	scanf("%d",&y);
	printf("Enter the value of Z :");
	scanf("%d",&z);


   sum=x*x*x+y*y*y+z*z*z+3*(x+y)*(y+z)*(z+x);
   printf("ANSWER=%d",sum);
}
