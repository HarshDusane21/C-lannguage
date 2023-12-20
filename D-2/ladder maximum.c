	#include<stdio.h>
main()
{
		
	
	int a,b,c,d,e;
	printf("Enter the value of A :  ");
	scanf("%d",&a);
	printf("Enter the value of B :  ");
	scanf("%d",&b);
	printf("Enter the value of C :  ");
	scanf("%d",&c);
	printf("Enter the value of D :  ");
	scanf("%d",&d);
	printf("Enter the value of E :  ");
	scanf("%d",&e);
	if(a>b&&a>c&&a>d&&a>e)
	{
		printf("A is maximum ");
	}
	else if(b>c&&b>d&&b>e&& b>a)
	{
		printf("B is maximum");
	}
	else if(c>d&&c>e&&c>a&&c>b)
	{
		printf("C is maximum");
	}
	else if(d>c&&d>e&&d>b&& d>a)
	{
		printf("D is maximum");
	}
	else if(e>c&&e>d&&e>c&& e>a)
	{
		printf("E is maximum");
	}
	
	}
