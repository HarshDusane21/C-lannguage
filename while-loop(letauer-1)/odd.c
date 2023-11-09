#include<stdio.h>
main()
{
	int num;
	 int x=1;
	printf("Enter any integer number :");
	scanf("%d",&num);
	
	while(x<=num)
	{
	   printf(" %d",x);
	   x+=2;
	}
}
