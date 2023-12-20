#include<stdio.h>
main()
{

	char hd ;
	printf("enter any  charchter :");
	scanf(" %c",&hd);
	switch (hd)
	{
		case 'S':printf("sunday");
		break;
			case 'M':printf("monday");
		break;
			case 'T':printf("tuesday");
		break;
			case 'W':printf("wensday");
		break;
			case 'TU':printf("trusday");
		break;
			case 'F':printf("friday");
		break;
			case 'SU':printf("sutrday");
		break;
		default:printf("please enter number between (M,T,W,TU,F,S,SU) ");
	}
}
