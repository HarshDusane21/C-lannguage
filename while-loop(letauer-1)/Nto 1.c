#include<stdio.h>
main()
{
	int num;
	 int x=1;
	printf("Enter any integer number :");
	scanf("%d",&num);
	
	while(num>=x)
	{
	   printf(" %d",num);
	   num--;
	}
}
