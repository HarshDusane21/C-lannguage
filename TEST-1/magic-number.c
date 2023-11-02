#include<stdio.h>
main()
{
	int num;
	printf("enter the value:");
	scanf("%d",&num);
	int x,y,z,a,b,c,d;
	x=num%10;
	a=num/10;
	y=a%10;
	b=a/10;
	z=b%10;
	
	d=x*y*z==x+y+z;
	printf("%d",d);
}
