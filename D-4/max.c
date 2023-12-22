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
	
    int  max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
		   max=a[i];
		}
	}
	
		printf(" maximum :s %d  ",max);
} 
