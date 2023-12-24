#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
    printf("Enter the name :");
    gets(name);
    printf("%s",strupr(name));
}
