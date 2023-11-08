#include<stdio.h>

main()
{
	float pr;
	printf("Enter your peranctage :");
	scanf("%f",&pr);
	
	if(pr>=90&&pr<=100)
	{
		printf("your grade is : A");
	}
	
	else if(pr>80&&pr<=90)
	{
		printf("your grade is : B");
	}
	
	else if(pr>=60&&pr<=80)
	{
		printf("your grade is : C");
	}
	
	else if(pr>=40&&pr<=60)
	{
		printf("your grade is : D");
	}
	
	else if(pr>=0 && pr<=35)
	{
		printf("your grade is : failed");
	}
	
}
