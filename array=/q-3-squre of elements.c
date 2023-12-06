# include<stdio.h>
main()
{
	int i;
	int n;
	printf("enter the limt of array :");
	scanf("%d",&n);
	int a[n];


	for(i=0;i<n;i++)
	{ 
	printf("enter the elements of array a[%d]:",i);
	scanf("%d",&a[i]);
	
		
	}
	
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]*a[i]);
	}
}
