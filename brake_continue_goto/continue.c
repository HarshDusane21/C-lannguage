#include<stdio.h>
main()
{
	int x=1;
	int y,z;
	printf("which number you want to skip :");
	scanf("%d%d",&y,&z);
	for(x=1;x<=10;x++)
	{
		
		if(x==y ||x==z)
		{
			continue;
		}
		printf(" %d",x);
	}
}
