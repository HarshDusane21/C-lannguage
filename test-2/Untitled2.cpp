#include<stdio.h>
main()
{
	int a,b,c ;
	printf("Enter the value  A: ");
	scanf("%d",&a);
	printf("Enter the value  B: ");
	scanf("%d",&b);
	printf("Enter the value  C: ");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("A is maximum");
	}
	else if(b>c&&b>a);
	{
		printf("B is maximum");
		
	}
	else if(c>a&&c>b)
	{
		printf("C is maximum");
	}
}
