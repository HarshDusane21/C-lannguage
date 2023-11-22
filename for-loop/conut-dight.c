#include<stdio.h>
main()
{
	int n;
	int c=0;
	printf("enter the value of n : ");
	scanf("%d",& n);
	for(;n>0;n/=10)
	{
		c++;
	}
	printf("%d",c);
	 printf("\n");
	 
	 	printf("enter the value of n : ");
	scanf("%d",& n);
	 
	 while(n>0)
	 {
	 	n/=10;
	 	c++;
	 }
	 printf("%d",c);
}

