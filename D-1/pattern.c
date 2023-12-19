#include<stdio.h>
main()

{
	 int i, j;
	 for(i=1;i<=5;i++)
	 {
	 	for(j=1;j<=9;j++)
	 	{
	 		if((i==1&&j==5)||(i==2&&(j==4||j==6))||(i==3&&(j==3||j==7))||(i==4&&(j==2||j==8)) )
	 		{
	 			printf("*");
			}
			
			 else
			 {
			 	printf("  ");
			 }
			 
		 }printf("\n");
	 	
	 }
	
}
