#include<stdio.h>
main()
{
	int a[4]={1,2,4};
	a[4]=a[0]+a[1];
	printf("%d",a[4]);
	
	int i;
	for(i=0;i<=4;i++)
	{
		printf("\n %d",a[i]);
	}
}