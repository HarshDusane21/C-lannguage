#include<stdio.h>
main()
{
	int start,end ,leap;
	printf("Enter the starting point :");
	scanf("%d",&start);
	printf("Enter the ending point :");
	scanf("%d",&end);
	
	leap=end-start;
	int length=leap/4+1;
	int leapyear[length];
	
	int x=0;
	int i;
	for(i=start;i<=end;i++)
	{
		if(i%4==0)
		{
		   leapyear[x]=i;
		   x++;
		}
	}
	for(i=0;i<x;i++)
	{
		printf(" %d ",leapyear[i]);
	}

}
