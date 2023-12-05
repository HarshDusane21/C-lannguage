#include<stdio.h>
main()
{
	int i,j;
	int n;
	printf("Enter the limt :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter %d :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=10;j++)
		{
			
			printf("%d* %d =%d \n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
}
