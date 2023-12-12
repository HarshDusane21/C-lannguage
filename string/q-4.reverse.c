#include<stdio.h>
main()
{
     
	char a[100];
	printf("Enter the name :");
	scanf("%s",&a);
	int i;

	for(i=a[100]-1;i>=0;i--)
	{
		   printf("%s",a[i]);
	}
}
