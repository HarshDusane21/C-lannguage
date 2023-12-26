#include<stdio.h>
void sum(int x)
{
	int a[x],sum=0,i;
	for(i=0;i<x;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<x;i++)
	{
		printf(" %d",a[i]);
		sum=sum+a[i];
	}
	printf(" \nsum is :%d",sum);
	
}

int main()
{  
    int x;
    printf("Enter the size :");
    scanf("%d",&x);
	sum( x);
	
	return 0;
}
