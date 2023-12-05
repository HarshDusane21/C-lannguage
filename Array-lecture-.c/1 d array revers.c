#include<stdio.h>
main()
{
  	int i;
	int n;
	
	
	printf("enter the value of :");
	scanf("%d",&n);
	
		int a[n];
		

		
	for(i=0;i<n;i++)
	{
		printf(" enter the values is a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
			printf("   %d",a[i]);
		
	}

}
