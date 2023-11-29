#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		
		for(j=0;j<=i;j++)
		{
			if((j)%2==2)
			{
				printf("%d",1);
			}
			else
			{
				printf("%d",0);
			}
		
		}printf("\n");
	}
}
