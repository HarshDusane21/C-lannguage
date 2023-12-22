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
		printf(" %d",a[i]);
	}
	 
	 	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		 if(a[i]>a[j])
	 		 {
	 		 	int temp=a[i];
	 		 a[i]=a[j];
	 		 a[j]=temp;
			  }
	 		 
		 }
	 }
    printf("\nAcenending oder :");
	for(i=0;i<n;i++)
	{
		
			printf("  %d  ",a[i]);
		
	}
	
	
} 
