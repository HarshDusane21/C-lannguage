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
    if(rev==n)
    {
    	printf("%d numbber is palidorm",n);
	}
	else
    {
    	printf("%d numbber is not palidorm",n);
	}
}
