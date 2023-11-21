#include<stdio.h>

main()
{
	int x=1;
	int sum=1;
	int n ;
	printf("Enter the value of N :");
	scanf("%d",&n);
	
	do
	{
		sum=sum*x;
		x++;
	}while(x<=n);
	printf("%d",sum);
	
}
