#include<stdio.h>
main()
{
	int x=1;
	int sum=0;
	int num;
	printf("Enter any integer number :");
	scanf("%d",&num);
    while(x<=num)
    {
    	sum=sum+x;
    	x++;
	}
	printf("%d",sum);
}
