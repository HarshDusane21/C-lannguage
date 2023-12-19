#include<stdio.h>
main()
{
	int temp;
	int a ,b;
	printf("Enter the value of A :");
	scanf("%d",&a);
	printf("Enter the value of B :");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("A :%d",a);
	printf("B:%d",temp);
}
