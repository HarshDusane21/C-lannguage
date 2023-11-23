#include<stdio.h>
main()
{
	int x=1;
	int sum=1;
	int n;
	printf("enter any number :");
	scanf("%d",&n);
	
	
	
	start :
	sum=sum*x;
    
	x++;
	if(x<=n)
	{
		goto start;
	}
	printf("%d",sum);	
}
