#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("enter the values A : \n ");
	scanf("%d",&a);
	printf("enter the values B : \n ");
	scanf("%d",&b);
	printf("enter the values C: \n ");
	scanf("%d",&c);
	printf("enter the values D : \n ");
	scanf("%d",&d);
	
	//a,b c d
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is maximum ");
			}
			else
			{
			   printf("D is maximum ");
			}
			
		}
		else
		{
			if(c>d)
			{
			 printf("C is maximum");
			}
			else
			{
				printf("D is maximum ");
			}
		}
		
	}

	else
	{
		//b c d 
		if(b>c)
		{
			if(b>d)
			{
				printf("B is maximum");
			}
			else
			{
				printf("D is maximum ");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is maximum ");
			}
			else
			{
				printf("D is maximum");
			}
		}
		
	}
}
