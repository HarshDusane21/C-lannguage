#include<stdio.h>
#include<string.h>
void pass(char password[])
{
		
		int i,length,check=0;
		length=strlen(password);
		
		if(length>=8&&length<=32)
		{
		    for(i=0;i<length;i++)
		   {
				if(password[i]>='A'&&password[i]<='Z')
				{
					check=1;
				}
		    } 
		    if(check==1)
		    {
		    	  check=0;
		    	    for(i=0;i<length;i++)
		           {
							if(password[i]>='a'&&password[i]<='z')
							{
								check=1;
							}
		           } 
		           if(check==1)
		           {
		           	    check=0;
		    	         for(i=0;i<length;i++)
		                 {
							if(password[i]>=48&&password[i]<=57)
							{
								check=1;
							}
		                 }
						 
						  if(check==1)
						  {
						 	  check=0;
			    	         for(i=0;i<length;i++)
			                 {
									if(password[i]>=32 && password[i]<=47 || password[i]>=58 && password[i]<=64 || password[i]>=91 && password[i]<=96 || password[i]>=123 && password[i]<=126)
								
									{
										check=1;
									}
				             }
			                 if(check==1)
			                 {
			                 	 printf(" your password cerate successfully ");
							 }
							 else
							 {
							 	printf("enter the minimum  1  special cercter  ");
							 }
						 
						  } 
						  else
						  {
	                          printf("enter the minimum  1 digth  ");
						  }
				   }
				   else
				   {
				   	 	printf("enter the minimum  1 small  letter ");
				   }
		    	  
			}
			else
			{
				printf("enter the minimum 1 capital letter ");
			}
		}
		else
		{
			printf("enter the password between 8 & 32 letter");
		}
}
int  main()
{
	char password[32];
	
	printf("Enter the password :");
	gets(password);
	pass(password);
	return 0;
}
