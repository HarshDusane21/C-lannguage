#include<stdio.h>
main()
{
	int x=1;

	int num;
	printf("Enter any integer number :");
	scanf("%d",&num);
    while(x<=10)
    {
    		printf("%d x %d =%d\n",num,x,num*x);
    		x++;
	}

}
