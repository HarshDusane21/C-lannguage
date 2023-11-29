#include<stdio.h>
main()
{
	int i ,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}printf("\n");
	}
	int a,b;
	
	for(a=4;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}printf("\n");
	}
}
