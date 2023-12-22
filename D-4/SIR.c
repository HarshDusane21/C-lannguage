#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n];
	int b[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
			printf("b[%d] :",i);
		scanf("%d",&b[i]);
		
		
	}
	
	for(i=0;i<n;i++)
	{
		int c[i] =a[i]+b[i];
		printf("%d :",c[i]);
	}
		for(i=0;i<n;i++)
	{
		
	}
	
 } 
