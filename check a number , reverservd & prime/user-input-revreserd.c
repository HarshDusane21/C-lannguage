#include<stdio.h>
main()
{
	int n;

	int x;
	int rev=0;
	printf("Enter any number :");
	scanf("%d",&n);
		int temp=n;
	while(temp>0)
	{
		x=temp%10;
		rev=(rev*10)+x;
		temp=temp/10;
	}
	printf("%d",rev);
}
