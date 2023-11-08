#include<stdio.h>
main()
{
	int unit;
	int total;
	printf("Enter your unit : ");
	scanf("%d",&unit);
	

	if(unit>0&&unit<=50)
	{
		total=unit*2.5;
		total=total+(total*0.2);
		printf("amount=%d",total);
	}
	else if(unit>50&&unit<=100)
	{
		total=unit*3;
		total=total+(total*0.2);
		printf("amount=%d",total);
	}
	else if(unit>100&&unit<=150)
	{
		total=unit*3.5;
		total=total+(total*0.2);
		printf("amount=%d",total);
	}
	else if(unit>150&&unit<=200)
	{
		total=unit*4;
		total=total+(total*0.2);
		printf("amount=%d",total);
	}
	
}
