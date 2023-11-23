#include<stdio.h>
main()
{
	int n;
	int x=1;
	int y;
	printf("Enter the value of :");
	scanf("%d",&n);
	printf("enter limti :");
	scanf("%d",&y);
	for(x=1;x<=n;x++)
	{
		printf(" %d",x);
		if(x==y)
		{
				
			break;
		}
	
	}
	
}
