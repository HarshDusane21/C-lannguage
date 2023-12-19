#include<stdio.h>
main()
{
	int temp;
	int a ,b;
	printf("Enter the value of A :");
	scanf("%d",&a);
	printf("Enter the value of B :");
	scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
	printf("A :%d \n",a);
	printf("B:%d",b);
}
