
#include<stdio.h>

int main()
{
	int x=1,n=28,sumeven=0;
	

	
	while(x<=n)
	{
		if(x % 2 == 0)
		{
			printf("  %d \n",x);
			sumeven = sumeven + x;
		}
		x++;
	}
	
	printf(" ans : %d",sumeven);
	
	return 0;
}
