#include<stdio.h>
main()
{
	int n;
	int sum=0;
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
		printf(" %d  ",a[i]);
	}
	

	for(i=0;i<n;i++)
	{
	   sum=sum+a[i];
	}
			printf(" \n sum = %d \n ",sum);
			printf("Avreage =%d",sum/n);
	
} 
