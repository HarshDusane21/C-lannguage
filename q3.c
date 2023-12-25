#include<stdio.h>
main()
{
	int i,n,j;
	
	printf("Enter size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{   printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nThe array is : ");
	
	for(i=0; i<n; i++)
	{  
		printf("%d ",a[i]);
	}
	
	int f=1;
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
				f++;
			}
		}
		if(a[i] != 0)
		{
			printf("%d -> %d\n",a[i],f);
		}
		f=1;
	}
	
	
	
}
