#include<stdio.h>
main()
{
	int n;

	printf("Enter the sizeof array :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf(" a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
   	for(i=n;i>=0;i--)
	{
	   printf("  %d  ",a[i]);
	
	
	}
		
}