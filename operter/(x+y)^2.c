#include<stdio.h>
main()
{
	//(x+y)^2=x*x+2*x*y+y*y
	int x,y;
	int sum;
	printf("Enter the value of X :");
	scanf("%d",&x);
	printf("Enter the value of Y :");
	scanf("%d",&y);

   sum=x*x+2*x*y+y*y;
   printf("ANSWER=%d",sum);
}
