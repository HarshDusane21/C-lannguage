#include<stdio.h>
main()
{
	int num ;
	printf("Enter the number to print day :");
	scanf("%d",&num);
	if(num==1)
	{
		printf("Monday");
	}
	else if(num==2)
	{
		printf("Tuesday");
	}
	else if(num==3)
	{
		printf("Wensday");
	}
	else if(num==4)
	{
		printf("Tursday");
	}
	else	if(num==5)
	{
		printf("Fariday");
	}
	else	if(num==6)
	{
		printf("Saturday");
	}
	else	if(num==7)
	{
		printf("sunday");
	}
	else
	{
		printf("enter(1 to 7)");
	}
}
