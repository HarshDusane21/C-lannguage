#include<stdio.h>
main()
{
	 int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
		
	}
	
		for(i=0;i<n;i++)
	{
		
		printf(" %d",a[i]);
		
	}
	
	   printf("\n reverse array is :");
	   
	for(i=n-1;i>=0;i--)
	{
		printf("  %d",a[i]);
	}
}
