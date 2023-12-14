#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	printf("Enter the string :");
	gets(a);
	char b[100];
	printf("Enter the string : ");
	gets(b);
	int length=strlen(a);
	int i,j,check=0;
	for(i=0;i<=length;i++)
	{
		check=0;
		for(j=0;j<length;j++)
		{
			if(a[i]==b[i])
			{
				check=1;
			}
		}
	}
	if(check==1)
	{
		printf(" two string are same");
		
	}
	else
	{
		printf(" two string are not same ");
	}
	
	
}
