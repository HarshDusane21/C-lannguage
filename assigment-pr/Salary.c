#include<stdio.h>
main()
{
	int salary;
	int HRA;
	int DA;
	int TA;
	int BS;
	
	printf("Enter your salary :");
	scanf("%d",&salary);
	HRA=(salary*10)/100;
	DA=(salary*5)/100;
	TA=(salary*8)/100;
	BS=salary+HRA+DA+TA;
	printf("Amount :%d",BS);
}
