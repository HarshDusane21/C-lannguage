#include<stdio.h>
main()
{
	int n;
	int x=1 ,sum=1;
	printf("Enter the sizeof array :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf(" a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
   	for(i=0;i<n;i++)
	{
		sum=sum*a[i];
	
	
	}
		printf(" sum of element is : %d  ",sum);
}