#include<stdio.h>
main()
{
	int num;
	int count=0;
	printf("enter any number :");
	scanf("%d",&num);
	while(num>0)
	{
		num/=10;
		count++;
	}
	printf("%d",count);
}
