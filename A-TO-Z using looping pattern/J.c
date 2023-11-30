#include<stdio.h>

main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i == 1||j==3)
			{
				printf("*");
			}
	        else if (j==1&&j==6||j==1&&j==7||(i==6&&j==1) ||(i==7&&j==2))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
			
		}
		printf("\n");
	}
	
}
