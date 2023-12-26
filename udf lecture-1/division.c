#include<stdio.h>
void divid()
{
	int a;
	printf("Enter the a :");
	scanf("%d",&a);
    if(a%3==0&&a%5==0)
    {
    	printf("Enter number is divisalbe by 3 and 5 ");
    	
	}
	else
	{
			printf("Enter number is not  divisalbe by 3 and 5 ");
	}
}
 main()
 {
 	divid();
 }
