#include<stdio.h>
main()
{
   int num;
   int x=1;
   int sum=1;
    
    printf("Enter any number :");
    scanf("%d",&num);
    for(x=1;x<=num;x++)
    {
    	sum=sum*x;

	}
	    	printf("%d",sum);
}
