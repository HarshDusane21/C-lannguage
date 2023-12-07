#include<stdio.h>
main()
{
	int i,j;
	int n;

	printf("Enter the sizeof array :");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf(" a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
      	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
		
	}
}
