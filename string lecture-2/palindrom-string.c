#include<stdio.h>
#include<string.h>
main()
{
	char x[100],y[100];
	printf("Enter string A : ");
	gets(x);
	int i,j=0,length=0,
	count=0;
	for(i=0;x[i]!='\0';i++)
	{
		length++;
	}
	for(i=length-1;i>=0;i--)
	{
		y[j]=x[i];
		j++;
	}
	for(i=0;i<length;i++)
	{
		if(x[i]!=y[i])
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		printf("string is not paildrom ");
	}
	else
	{
		printf(" string is paildrom ");
	}
}
