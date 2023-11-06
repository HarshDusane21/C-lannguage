#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the value of C:");
	scanf("%d",&c);
	printf("Enter the value of D:");
	scanf("%d",&d);
	printf("Enter the value of E :");
	scanf("%d",&e);
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is maximum"):	printf("E is maximum"):(d>e)?	printf("D is maximum"):	printf("E is maximum"):(c>d)?	printf("C is maximum"):	printf("D is maximum")	:(b>c)?(b>d)?(b>e)?printf("B is maximum"):printf("E is maximum"):(d>e)?	printf("D is maximum"):	printf("E is maximum"):(c>d)?(c>e)?printf("C is maximum"):printf("E is maximum"):(d>e)?	printf("D is maximum"):	printf("E is maximum");
}
