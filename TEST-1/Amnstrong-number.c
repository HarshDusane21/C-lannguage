#include<stdio.h>
main()
{
	int num;
	printf("enter the value:");
	scanf("%d",&num);
	int x,y,z,a,b,c;
	x=num%10;
	a=num/10;
	y=a%10;
	b=a/10;
	z=b%10;
	
	c=(x*x*x)+(y*y*y)+(z*z*z);
	printf("Amnstrong number :%d\n",c==num);
	printf("here 1 means amnstrong number !");
}
