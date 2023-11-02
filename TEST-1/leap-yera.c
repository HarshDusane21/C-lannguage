#include<stdio.h>
main()
{
	int a;
	int Answer;
	printf("Enter the value of a :");
	scanf("%d",&a);
	Answer=a%4==0;

	printf(" Leap Year : %d \n",Answer);
     printf("Here '1 ' menas user enter year is leap year ! ");
}

