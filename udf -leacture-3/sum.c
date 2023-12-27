#include<stdio.h>
int sum(int s)
{
	if(s==1)
	{
		return 1;
	}
	return s+sum(s-1);
	
	
	

}
main()
{
   int s;
    printf("Enter the number :");
    scanf("%d",&s);
	printf("%d",sum(s));
	printf("%d",sum(s));

}
