#include<stdio.h>
main()
{
	int i ,j ,l,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		for(l=i;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
}
