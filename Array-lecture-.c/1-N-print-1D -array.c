#include<stdio.h>
main()
{
  	int i;
	int n;
	
	printf("enter the value of :");
	scanf("%d",&n);
		int a[n];
		
//		printf("enter the value of is%d :\n",n);
		
	for(i=0;i<n;i++)
	{
		printf(" enter the values is a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
//	 printf("Assign value is \n ");
	 
	 
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
		
	}
}
