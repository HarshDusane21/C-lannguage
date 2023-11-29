#include<stdio.h>
main()
{
	int n=123;
	int temp=n;
	int x;
	int rev=0;
	while(temp>0)
	{
		x=temp%10;
		rev=(rev*10)+x;
		temp=temp/10;
	}
	printf("%d",rev);
}
