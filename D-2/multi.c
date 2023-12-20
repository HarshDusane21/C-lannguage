#include<stdio.h>
main()
{
	int x=1;

	int n;
	printf("Enter the n : ");
	scanf("%d",&n);
	for(x=1;x<=10;x++)
	{
	 	printf("%d x %d : %d \n ",n,x,n*x);
	}

}
