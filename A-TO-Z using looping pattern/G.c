#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==3||(j==1&&i==1)||j==3&&i==7||j==2&&i==7)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}
