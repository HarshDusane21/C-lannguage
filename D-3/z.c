#include<stdio.h>
main()
{
	int i,j,k,l;
    for(i=1;i<=7;i++)
   {
   	for(j=1;j<=7;j++)
   	{
   		if(i==1||i==7||i==2&&(j==6)||i==3&&j==5||i==4&&j==4||i==5&&j==3||i==6&&j==2)
   		{
   			printf("*");
   			
		   }
		   else
		   {
		   	printf(" ");
		   }
	}

    
	   
	   
	   
	   printf("\n");
	   
   }
   

}
