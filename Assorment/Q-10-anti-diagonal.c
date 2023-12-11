#include<stdio.h>
main()
{
	int n;
	printf("Enter the size of row & column :");
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	printf("enter the element of Array of A : \n ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("  %d",a[i][j]);
		}
		printf("\n");
	}
	
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		  if(i+j==(n)-1)
		  {
		  	printf(" \n  %d",a[i][j]);
		  	sum=sum+a[i][j];
		  }
		}
	}
	printf(" \n sum is :  %d",sum);
}
