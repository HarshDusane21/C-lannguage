#include<stdio.h>


	int main()
{

	char name[50];
	printf("Enter the G-mail : ");
	gets(name);
	char name2[10]="@gmail.com";
//	mail(name,name2);


	
	int i,length,check=0;
	int x=0;
	length=strlen(name);
//	printf("%d",length); 
     if(length>=15&&length<=32)
     {
		     	  for(i=0;i<length;i++)
				   {
				   	check=0;
				   	if(name[i]>='A'&&name<='Z')
				   	{
				   		check==1;
					   }
				   }
				   if(check==0)
				   {
						    for(i=0;i<length;i++)
						   {
							   	check=0;
							   	    if(name[i]>=32 && name[i]<=45 || name[i]==47 || name[i]>=58 && name[i]<=63 || name[i]>=91 && name[i]<=96 || name[i]>=123 && name[i]<=126)
							   	   {
							   		check==1;
								   }
						   }
						   if(check==0)
						   {
						   	  	  for(i=0;i<length-10;i++)
				               	 {	
				   					check=0;
				   					if(name[i]==name2[x])
				   					{
				   								x++;
					   				}
				 				}
				 				if(check==1)
				 				{
				 					printf("Gmail is perfact");
								 }
								 else
								 {
								 	printf(" gmail is not perfact ");
								 }
						   	   
						   	
						   }
						   else
						   {
						   	  printf("Speical charchter are not allowed in gmail ");
						   }
				   }
				   
				   else
				   {
				   	  printf("In gmail only small letter vaild ");
				   	  
				   }
	 }
	 else
	 {
	 	printf("Your gmail is worng !");
	 }
	
	return 0;
}


