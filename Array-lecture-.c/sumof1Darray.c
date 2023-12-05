#include<stdio.h>
main()
{
  	int i;
	int n;
	int sum=0;
	
	printf("enter the value of :");
	scanf("%d",&n);
		int a[n];
		

		
	for(i=0;i<n;i++)
	{
		printf(" enter the values is a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	printf("  ans : %d",sum);
}
