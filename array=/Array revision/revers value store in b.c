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
	 int x=n-1;
	 int b[i];
   	for(i=0;i<n;i++)
	{
	   b[i]=a[x];
	   x--;
	   printf("%d",b[i]);
	
	
	}
		
}