#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n];
	
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
		
	
		
	}
	 for(i=0;i<n;i++)
	 {
	 	for(j=1;j<=10;j++)
	 	{
	 		printf("%d x  %d =%d \n",a[i],j,a[i]*j);
		 }
	 }printf("\n");
	
	
} 
