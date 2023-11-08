#include<stdio.h>
main()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eilgeable for votting  ");
	}
	else if(age<18)
	{
		printf("You are  not  eilgeable for votting  ");
	}
}
