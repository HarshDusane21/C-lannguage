#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
	char name2[50];
    printf("Enter the name :");
    gets(name);
      printf("Enter the name :");
    gets(name2);
    int cmp=strcmp(name,name2);
    printf("%d",cmp);
}
