#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the value of A :");
	scanf("%d",&a);
	printf("Enter the value of B :");
	scanf("%d",&b);
	printf("Enter the value of C:");
	scanf("%d",&c);
		printf("Enter the value of D:");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf(" A is maximum "):printf("D is maximum"):(c>d)?printf("C is maximum"):printf("D is maximum "):(b>c)?(b>d)?("B is maixmum"):printf("D is maximum"):(c>d)?printf("C is maximum"):printf("D is maximum ");

}
