#include<stdio.h>
main()
{
	int a[8]={5,6,5,6,1,2,4,4};
	int i,j,check=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(a[i]==a[j]&&(i!=j))
			{
				check=1;
			}
		}
	}
	if(check==0)
	{
		printf("%d",a[i]);
	}
	check=0;
}
