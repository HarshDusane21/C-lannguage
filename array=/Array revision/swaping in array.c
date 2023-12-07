#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50};
	int temp=a[0];
	a[0]=a[4];
	a[4]=temp;
	printf("\n %d %d",a[0],a[4]);
}
