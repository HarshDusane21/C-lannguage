#include<stdio.h>
main()
{
	 int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
		
	}
	
		for(i=0;i<n;i++)
	{
		
		printf("%d \n",a[i]);
		
	}
	
	int j;
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
      printf("Acending oder is : ");
     for(i=0;i<n;i++)
     {
     	printf("  %d \n ",a[i]);
	 }
}
