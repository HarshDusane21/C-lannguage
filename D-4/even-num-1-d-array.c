#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf(" %d \n ",a[i]);
	}
	
	printf(" even number is :");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("  %d  ",a[i]);
		}
	}
	
	
} 
