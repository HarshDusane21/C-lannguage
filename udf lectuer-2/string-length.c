#include<stdio.h>
#include<string.h>
void len(char name[])
{
	int length=strlen(name);
	printf("%d",length);
}
int main()
{
	char name[50];

	printf("Enter the string :");
	gets(name);

	len(name);
	return 0;

}
