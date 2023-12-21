#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("    \n odd =%d \n",i);
		}
//		printf("\n");
		else if(i%2==0)
		{
			printf(" \n  Even =%d",i);
		}
	}
}
