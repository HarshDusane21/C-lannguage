#include<stdio.h>
main()
{
	int n;
	printf("Enter the any number :");
	scanf("%d",&n);
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	 int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<10;j++)
	
	{
		if(a[i]+a[j]==n)
		{
			printf("%d ,%d \n "  ,a[i],a[j]);
		}
	
	}
	}
}
