#include<stdio.h>
main()
{
	int x,y;
	printf("enter the  value of x :");
	scanf("%d",&x);
	printf("enter the  value of y :");
	scanf("%d",&y);
	
	//(x-y)^2=x^2-2xy+y^2
	int sum =x*x-2*x*y+y*y;
	printf("Answer is = %d",sum);
	
}
