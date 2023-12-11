#include<stdio.h>
main()
{
	 int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	int b[n]; 
	int c[n];
	int i;
	printf("Enter the elements of array of A : \n ");
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d ",&a[i]);
		
	}
	

	printf("Enter the elements of array of B  : \n ");
		for(i=0;i<n;i++)
	{
		printf("b[%d] : ",i);
		scanf("%d",&b[i]);
		
	}
	
  for(i=0;i<n;i++)
	{
		
	     c[i]=a[i]+b[i];
	 	printf(" %d ",c[i]);	
	}
	


}
