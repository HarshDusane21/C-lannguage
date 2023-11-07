#include<stdio.h>
main()
{
	int month;
	 printf("Enter the number of month : ");
	 scanf("%d",&month);
	 
	 switch(month)
	 {
	 	case 1 : printf("Janaray - 31 Days ");
	 	break;
	 		case 2 : printf("Febuaray - 28 Days ");
	 	break;
	 		case 3 : printf("MArch - 31 Days ");
	 	break;
	 		case 4 : printf("April - 30 Days ");
	 	break;
	 		case 5: printf("May - 31 Days ");
	 	break;
	 		case 6 : printf("June - 30 Days ");
	 	break;
	 		case 7 : printf("Juliy- 31 Days ");
	 	break;
	 		case 8 : printf("Augest - 31 Days ");
	 	break;
		 	case 9 : printf("Spetmber - 30 Days ");
	 	break;
		 	case 10 : printf("Octmber - 31 Days ");
	 	break;
	 		case 11: printf("Nevmber - 30 Days ");
	 	break;
	 		case 12 : printf("Decmber- 31 Days ");
	 	break;
	 	
	 	default:printf("please enter number between (1 to 12) !");
	 }
}
