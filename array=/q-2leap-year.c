#include<stdio.h>
main()
{
	int year_s;
	int year_e;
	int x;
	int total;
	
	printf("Enter the strating point of year :");
	scanf("%d",&year_s);
	printf("Enter the ending point of year :");
	scanf("%d",&year_e);
	
	total=year_e-year_s;
	x=(total/4)+1;
	
	printf(" size : %d",x);
	
	int a[x];
	int i;
	for(i=0;i<x;i++)
	{
		printf("%d",a[i]);
	}
}
