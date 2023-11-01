#include<stdio.h>
main()
{
	int x=30;
	int y=40;
	printf("%d \n",(x>=10&&40<=y)||(x>30&&40<=y));
	printf("%d \n",(x>=10||40<=y)||(x>30||40<=y));
	printf("%d \n",!(x>=10&&40<=y)||(x>30&&40<=y));
	printf("%d \n",(x>=10&&40<=y)||!(x>30&&40<=y));
}
