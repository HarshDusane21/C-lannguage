#include<stdio.h>
main()
{
	//(x+y)^3=x^3 +3x^2y+3xy^2+y^3
	//(x+y)^3=x*x*x+3*x*x*y+3*x*y*y+y*y*y*
	int x,y;
	int sum;
	printf("Enter the value of X :");
	scanf("%d",&x);
	printf("Enter the value of Y :");
	scanf("%d",&y);
   
   sum=x*x*x+3*x*x*y+3*x*y*y+y*y*y;
   printf("ANSWER=%d",sum);
}
