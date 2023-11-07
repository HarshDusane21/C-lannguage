#include<stdio.h>
main()
{
	int option;
	printf("Hello ! sir / maam \n");
	printf("for contiue select option :");
	scanf("%d",&option);
   switch(option)
   {
     case 1:printf( "  phone  call is end  ");
     break;
     case 2:printf("you enter for contiue \n");
     
     int  language;
     printf("choose your language\n");
     printf("1.hindi\n");
     printf("2.Gujarati\n");
     printf("3.english\n");
     printf("4.marathi\n");
     printf("enter number for choice a language !");
     scanf("%d",&language);
     
     switch(language)
     {
	 
     case 1:printf("HINDI \n");
			     int song;
			       printf("choose your song \n");
				     printf("1. bollywood song\n");
				     printf("2. Hollywood song\n");
				     printf("3.Tamil song\n");
				     printf("4. Bojapuri  song \n");
			     printf("enter number to choice you song :\n");
			     scanf("%d",&song);
			     switch(song)
			     {
			     	case 1:printf("you select bollowood song :");
			     	break;
			     	case 2:printf("you select  Hollywood song :");
			     	break;
			     	case 3:printf("you select Tamil song :");
			     	break;
			     	case 4:printf("you select Bojapuri  song :");
			     	break;
			     	 default:printf("please enter number  (1 to 4) !");
				 }
     break;
     case 2:printf("Gujarati \n ");
         
         switch(song)
			     {
			     	case 1:printf("you select Gujarti  song :");
			     	break;
			     	case 2:printf("you select  garaba song :");
			     	break;
			     	case 3:printf("you select sanedo song :");
			     	break;
			     	case 4:printf("you select  Dayro  song :");
			     	break;
			     	 default:printf("please enter number  (1 to 4) !");
				 }
     break;
     case 3:printf("English \n ");
      
           switch(song)
			     {
			     	case 1:printf("you select hollywood song :");
			     	break;
			     	case 2:printf("you select  rape song :");
			     	break;
			     	case 3:printf("you select massup song :");
			     	break;
			     	case 4:printf("you select Bojapuri  song :");
			     	break;
			     	 default:printf("please enter number  (1 to 4) !");
				 }
     break;
     case 4:printf("marthi \n ");
            switch(song)
			     {
			     	case 1:printf("you select  marthi song :");
			     	break;
			     	case 2:printf("you select  Bhajan song :");
			     	break;
			     	case 3:printf("you select  song :");
			     	break;
			     	case 4:printf("you select Bojapuri  song :");
			     	break;
			     	 default:printf("please enter number  (1 to 4) !");
				 }
     break;
     default:printf("please enter 1 to 4 !");
     }
     default:printf("please enter number  (1 or  2) !");
   }
}
