#include<stdio.h>

main()
{ 
// 3 33 333 3333 33333

	int x=0, n;
	int n2 ;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("enter the size : ");
	scanf("%d",&n2);

	for(;x<=n2;)
	{
	     x=(x*10)+n ;
	     printf("%d ",x); 
	
	}




}

