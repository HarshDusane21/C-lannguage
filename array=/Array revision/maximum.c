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
	
	int max=a[0];
   	for(i=0;i<n;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	
	
	}
		printf(" maximum number is :  %d  ",max);
}
