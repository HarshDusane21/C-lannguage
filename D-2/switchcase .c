#include<stdio.h>
main()
{
	char  x;
	int a,b;
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the valuie of B :");
	scanf("%d",&b);
	printf("Enter the (+,-,*,/):");
	scanf(" %c",&x);
	switch(x)
	{
		case'+':printf("%d + % d :%d",a,b,a+b);
		break;
		case'-':printf("%d - % d :%d",a,b,a-b);
		break;
		case'*':printf("%d * %d :%d",a,b,a*b);
		break;
		case'/':printf("%d / % d :%d",a,b,a/b);
		break;
		default: printf(" Enter(+,-,*,/) ");
	}
} 
