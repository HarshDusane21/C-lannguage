#include<stdio.h>
main()
{
	int i ,j,k; 
	
	for(i=1;i<=10;i++)
	{
		for(k=i;k<10;k++)
		{
			printf(" ");
		}

		for(j=1;j<=i;j++)
		{
			printf("*");
		}printf("\n");
	}
		for(i=10;i>=1;i--)
	{
		for(k=i;k<10;k++)
		{
			printf(" ");
		}

		for(j=1;j<=i;j++)
		{
			printf("*");
		}printf("\n");
	}
}

