#include<stdio.h>
main()
{
	int num;
	 int x=2;
	printf("Enter any integer number :");
	scanf("%d",&num);
	
	while(num>=x)
	{
	   printf(" %d",num);
	   num-=2;
	}
}
