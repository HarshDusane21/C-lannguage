#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	printf("enter the name : ");
	gets(a);
    int length=strlen(a);
    int i;
	char b[20];
	for(i=0;i<length;i++)
	{
	   b[20]=a[i];
	}
	printf("ans:%s",a);
}
