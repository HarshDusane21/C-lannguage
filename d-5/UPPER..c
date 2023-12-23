#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	printf("Enter the name : ");
	scanf("%c",&a);
	int i;
	for(i=0;i<50;i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
}
