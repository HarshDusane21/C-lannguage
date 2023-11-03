#include<stdio.h>
main()
{
	int age;
	printf("Enter the Age :");
	scanf("%d",&age);
	if(age>0)
	{
		if(age>=120)
		{
			printf("you enter age is not valied ");
			
		}
		else
		{
			printf("you enter   valid age ");
		}
	}
	else
		{
			printf("you enter not a valid age ");
		}
}
