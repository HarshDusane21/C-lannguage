#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,6};
	a[0]=a[1]=a[2]=a[3]*a[4];
	printf("%d %d %d ",a[0],a[1],a[2]);
		int i;
	for(i=0;i<=4;i++)
	{
		printf("{ %d  }",a[i]);
	}
}