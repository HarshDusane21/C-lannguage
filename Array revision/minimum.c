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
	
	int mini=a[0];
   	for(i=0;i<n;i++)
	{
		if(mini > a[i])
		{
			mini = a[i];
		}
	
	
	}
		printf(" minimum number is :  %d  ",mini);
}
