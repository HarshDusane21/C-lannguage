#include<stdio.h>
main()
{
	int x=1;
	int num;
	printf("enter the value of n :");
	scanf("%d",&num);
	do
	{
		printf("%d X %d =%d \n",num,x,num*x);
		x++;
	}while(x<=10);
}
