#include<stdio.h>
main()
{
	int i ,j ,l,k;
	for(i=5;i>=1;i--)
	{
			for(k=i;k>=1;k--)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		
		for(l=4;l>=i;l--)
		{
			printf("%d",l);
		}
	
	
		printf("\n");
	}
}
